#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyPath(int, int);

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", MyPath(a, b));
	return 0;
}

int MyPath(int a, int b)
{
	if (b - a < 0)
		return -1;
	else if (b - a == 0 || b - a == 1)
		return 1;
	else if (b - a == 2)
		return 2;
	else
		return MyPath(a, b - 1) + MyPath(a, b - 2);
}