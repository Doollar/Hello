#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//列出1-100奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i%2 == 1)
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//
//	putchar(ch);
//	printf("%c \n", ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z 停止
//	//EOF = end of file => -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

int main()
{
	char arr1[] = "-1+  i  love  u !!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
	int right = strlen(arr1) - 1;

	while (left < right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s \n", arr2);
		//休息一秒
		Sleep(1000);
		system("cls");
		//执行系统命令的一个函数；
		//cls--清空屏幕；
		left++;
		right--;
	}
	printf("-1+  i  love  u !!!");
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//
	int right = sz - 1;//

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是： %d \n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到 /n");
	}
	return 0;
}