#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IntRevs(int);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", IntRevs(n));
	return 0;
}

int IntRevs(int n)
{
	int m, num = 0;
	if (0 == n)
		num = 0;
	for (n; n >= 10; n /= 10)
	{
		m = n % 10;
		num = 10 * num + m;
	}
	m = n % 10;
	num = 10 * num + m;
	return num;
}