#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k, n;
	scanf("%d", &n);

	for (i = 0; i <= n / 3; ++i)
		for (j = 0; j <= n / 5; ++j)
			for (k = 0; k <= n / 7; ++k)
				if (3 * i + 5 * j + 7 * k == n)
				{
					printf("%d %d %d", i, j, k);
					return -1;
				}
				
	printf("-1");
	return 0;
}