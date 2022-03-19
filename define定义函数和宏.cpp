#include <stdio.h>

//函数的实现
int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//宏的定义
#define MAX(X,Y) (X>Y?X:Y)

int main()
{
	//int a = MAX;
	int a = 10;
	int b = 20;
	//函数
	int max = MAX(a, b);
	printf("max = %d\n", max);
	//宏的实现
	max = MAX(a, b);
	//max = (a>b?a:b);
	printf("max = %d\n", max);
	return 0;
}