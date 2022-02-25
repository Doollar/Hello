#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, remainder, i = 1, num = 0;
	scanf("%d", &n);

	if (0 == n)
		num = 0;

	while (n != 0)
	{
		remainder = n % 10;
		num = num + remainder * i;
		n /= 10;
		i = i * 2;
	}

	printf("%d", num);
	return 0;
}