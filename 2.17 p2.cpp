#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0;
	int v1 = 0;
	int v2 = 0;
	int t = 0;
	scanf("%d%d%d%d", &x, &v1, &v2, &t);
	int distance2 = (v1 - v2) * t;

	if (distance2 >= x)
		printf("Yes \n");
	else
		printf("No \n");

	return 0;
}