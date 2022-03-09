#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, d1, d2, d3, mod, num = 0;
	scanf("%d %d %d", &d1, &d2, &d3);
	for (i = d1; i <= d2; ++i)
	{
		mod = i % d3;
		if (mod != 0)
			++num;
	}
	printf("%d", num);
	return 0;
}