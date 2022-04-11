#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyNum(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", MyNum(n));
	return 0;
}

int num = 0;
int MyNum(int n)
{
	if (52 == n || 76 == n)
	{
		num = 7;
		return num;
	}
	else if (53 == n || 77 == n)
	{
		num = 8;
		return num;
	}
	else if (1 == n)
		;
	else if (n % 3 == 0)
		n = MyNum(n / 3);
	else if (n % 3 == 1)
	{
		if (n % 8 == 0)
			n = MyNum(n / 2);
		else
			n = MyNum(n - 1);
	}
	else
	{
		if (n % 8 == 0)
			n = MyNum(n / 2);
		else if (n % 2 == 0)
			n = MyNum(n / 2);
		else 
			n = MyNum(n - 1);
	}
	num += 1;
	return num;
}