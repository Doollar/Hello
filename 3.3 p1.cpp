#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	long long i, n, f = 1, mod = 0, quotient, sum = 0;
//	scanf("%lld", &n);
//
//	for (i = 1; i <= n; ++i)
//		f *= i;
//	mod = f % 10;
//	quotient = f / 10;
//	while (mod == 0)
//	{
//		sum += 1;
//		mod = quotient % 10;
//		quotient = quotient / 10;
//	}
//	
//	printf("%lld", sum);
//	return 0;
//}

#include <stdio.h>

int main()

{
	int n, s = 0;
	scanf("%d", &n);

	while (n > 0)
	{
		s += n / 5;
		n /= 5;
	}

	printf("%d", s);
	return 0;
}