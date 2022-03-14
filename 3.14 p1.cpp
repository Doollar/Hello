#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyPnumber(int n);

int main()
{
	int i, n;
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{

		if (MyPnumber(i) == i)
			printf("%d ", i);
	}

	return 0;

}

int MyPnumber(int n)
{
	int i, sum = 0, part = 0;
	for (i = 1; i < n; i++)
	{
		part = n % i;
		if (part == 0)
			sum += i;
	}
	return sum;
}