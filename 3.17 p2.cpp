#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double MyPower(double x, long long n);

int main()
{
	double x;
	long long n;
	scanf("%lf%lld", &x, &n);
	printf("%.5f", MyPower(x, n));
	return 0;
}

double MyPower(double x, long long n)
{
	double power;
	if (0 == n)
		power = 1.0;
	else if (n > 0)
	{
		if (n % 2 != 0)
			power = x * MyPower(x, n - 1);
		else
			power = MyPower(x, n / 2) * MyPower(x, n / 2);
	}
	else
	{
		if (n % 2 != 0)
			power = (double)1.0 / x * MyPower(x, n + 1);
		else
			power = MyPower(x, n / 2) * MyPower(x, n / 2);
	}
	return power;
}