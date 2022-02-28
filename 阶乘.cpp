#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, f;
	scanf("%d", &n);
	while (n != 0)
	{
		
		for(i = 2, f = 1; i <= n; i++)
		{
			f *= i;
		}
		printf("%d \n", f);
		scanf("%d", &n);
	}
	
	return 0;
}