#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int MyMax(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10);
//int MyMin(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10);
//
//
//int main()
//{
//	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, max, min;
//	double aver = 0;
//	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
//	max = MyMax(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
//	min = MyMin(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
//	aver = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 - max - min) / 8;
//	printf("%.2f", aver);
//	return 0;
//}
//
//int MyMax(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10)
//{
//	int max = n1;
//	if (n2 > n1)
//		max = n2;
//	if (n3 > max)
//		max = n3;
//	if (n4 > max)
//		max = n4;
//	if (n5 > max)
//		max = n2;
//	if (n6 > max)
//		max = n6;
//	if (n7 > max)
//		max = n7;
//	if (n8 > max)
//		max = n8;
//	if (n9 > max)
//		max = n9;
//	if (n10 > max)
//		max = n10;
//	return max;
//}
//
//int MyMin(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10)
//{
//	int min = n1;
//	if (n2 < n1)
//		min = n2;
//	if (n3 < min)
//		min = n3;
//	if (n4 < min)
//		min = n4;
//	if (n5 < min)
//		min = n5;
//	if (n6 < min)
//		min = n6;
//	if (n7 < min)
//		min = n7;
//	if (n8 < min)
//		min = n8;
//	if (n9 < min)
//		min = n9;
//	if (n10 < min)
//		min = n10;
//	return min;
//}

int main()
{
	int i, n, max, min, num, sum = 0;
	double aver = 0;
	scanf("%d", &num);
	max = num;
	min = num;
	sum = num;

	for (i = 1; i <= 9; ++i)
	{
		scanf("%d", &num);
		sum += num;
		if(num > max)
			max = num;
		if (num < min)
			min = num;
	}
	aver = (sum - max - min) / 8;
	printf("%.2f", aver);
	return 0;
}
