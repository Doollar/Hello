//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("Input n:");
	scanf("%d", &n);
	int d = 1;
	double sum = 0;

	while (d <= n)
	{
		sum = sum + 3.14 * d;
		d = d + 1;
	}

	printf("The sum: %f",sum);
	return 0;
}