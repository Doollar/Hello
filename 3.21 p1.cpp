#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double MyHermite(int, double);

int main()
{
	int n;
	double x;
	scanf("%d%lf", &n, &x);
	printf("%.2f", MyHermite(n, x));
	return 0;
}

double MyHermite(int n, double x)
{
	double hermite;
	if (0 == n)
		hermite = 1.0;
	else if (1 == n)
		hermite = 2.0 * x;
	else if (n > 1)
		hermite = 2.0 * x * MyHermite(n - 1, x) - 2 * (n - 1) * MyHermite(n - 2, x);
	return hermite;
}