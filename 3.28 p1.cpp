#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MySound(int);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", MySound(n));
	return 0;
}

int MySound(int n)
{
	int sound = 0;
	int m, a, b, c, d, e;
	m = 3 * (n - 1);
	a = m / 60;
	b = m / 12;
	c = m / 15;
	d = 4 * (n - 1);
	e = d / 20;
	sound = 3 * (n - 1) - b - c - e + a + 1;	
	return sound;
}