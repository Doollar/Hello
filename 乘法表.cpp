#include <stdio.h>

//int main()
//{
//	int i, j;
//
//	for (int i = 1; i <= 9; ++i)
//	{
//		for (int j = 1; j < i; ++j)
//		{
//			printf("\t");
//		}
//		for (int j = i; j <= 9; ++j)
//		{
//			printf("%d \t", i * j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

int main()
{
	int i, j;

	for (int i = 1; i <= 9; ++i)
	{
		for (int j = i; j <= 9; ++j)
		{
			if (j < i)
				printf("\t");
			else
				printf("%d \t", i * j);
		}
		printf("\n");
	}
			
	return 0;
}