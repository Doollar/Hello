#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyPath(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", MyPath(n));
	return 0;
}

int MyPath(int n)
{
	if (n < 1)
		return -1;
	else if (n == 1 || n == 2)
		return 1;
	else
		return MyPath(n - 1) + MyPath(n - 2);
}
