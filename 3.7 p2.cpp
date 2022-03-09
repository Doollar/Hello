#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);

	while (n >= 0)
	{
		sum += n;
		scanf("%d", &n);
		if (n == -1)
			break;
	}

	printf("%d", sum);
	return 0;
}