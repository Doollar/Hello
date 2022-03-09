#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, num, sum = 0;
	scanf("%d \n", &n);

	for (i = 1; i <= n; ++i)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("%d", sum);
	return 0;
}