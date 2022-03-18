#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyNum(int);

int main()
{
	int n, ori;
	scanf("%d", &n);
	printf("%d \n", MyNum(n));
	ori = MyNum(10);
	printf("%d", ori);
	return 0;
}

int MyNum(int n)
{
	int num;
	if (n == 1)
		num = 2;
	else
		num = (MyNum(n - 1) + 1) * 2;
	return num;
}