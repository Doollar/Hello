#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyFactorial(int);

int main()
{
	int n, r, means;
	scanf("%d %d", &n, &r);
	means = MyFactorial(n) / MyFactorial(r) / MyFactorial(n - r);
	printf("%d", means);
	return 0;
}

int MyFactorial(int n)
{
	int i, factorial = 1;
	for (i = 1; i <= n; i++)
		factorial *= i;
	return factorial;

}
