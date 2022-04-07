#define _CRT_SECURE_NO_WARNINGS

//Use the easy way of cycling.

//unsolved...

#include <stdio.h>

int main()
{
	int xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2, xc1, yc1, xc2, yc2;
	int i, j, target = 0;
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &xa1, &ya1, &xa2, &ya2, &xb1, &yb1, &xb2, &yb2, &xc1, &yc1, &xc2, &yc2);

	for (i = xa1; i < xa2; ++i)
	{
		for (j = ya1; j > ya2; --j)
		{
			if (i <= xb2 - 1 && i >= xb1 && j <= yb1 && j >= yb2 + 1)
				target = 0;
			else if (i <= xc2 - 1 && i >= xc1 && j <= yc1 && j >= yc2 + 1)
				target = 0;
			else
				target += 1;
		}
	}
	printf("%d", target);
	return 0;
}