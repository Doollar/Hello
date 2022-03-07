#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int xdate, mdate;
//	scanf("%d%d", &xdate, &mdate);
//	for (int i = xdate; i <= 365; i += 3)
//		for (int j = mdate; j <= i; j += 7)
//		{
//			if (i == j)
//			{
//				printf("y \n");
//				return 0;
//			}
//		}
//	printf("n \ n");
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	int xdate, mdate;
//	scanf("%d%d", &xdate, &mdate);
//	for (int i = xdate; i <= 365; i += 3)
//		for (int j = mdate; j <= i; j += 7)
//		{
//			if (i == j)
//				flag = 1;
//		}
//	if (flag = 1)
//		printf("y \n");
//	else
//		printf("n \n");
//		return 0;
//}

int main()
{
	int flag = 0;
	int xdate, mdate;
	scanf("%d%d", &xdate, &mdate);
	for (int i = 0; xdate + 3 * i <= 365; ++i)
		for (int j = 0; mdate + 7 * j <= 365; ++j)
		{
			if (xdate + 3 * i == mdate + 7 * j)
				flag = 1;
		}
	if (flag = 1)
	printf("y \n");
	else
		printf("n \n");
	return 0;
}