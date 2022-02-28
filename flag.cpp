#include <stdio.h>

int main()
{
	int flag = 1;
	for (int i = 1; i <= 9 && flag; ++i)
	{
		for (int j = 1; j <= 9 && flag; ++j)
		{
			if (i * j > 10)
				flag = 0;
			else
				printf("%d \t", i * j);
		}

		printf("\n");
	}
	return 0;
}