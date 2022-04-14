#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MySum(int, int);
int IntRevs(int);

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d", MySum(m, n));
	return 0;
}

int MySum(int m, int n)
{
	int a, b, c, d, e, f, g, sum = 0;
    a = IntRevs(m) % 10;
    b = m % 10;
    e = IntRevs(IntRevs(m) / 10);
    if (1 == n)
    {
        if (m % 10 != 0)
            c = a + e;
        else
            c = a + e * 10;
        d = b + m / 10;
        if (c >= d)
            sum += c;
        else
            sum += d;
        return sum;
    }
    else
    {
        f = MySum(m / 10, n - 1);
        if (m % 10 != 0)
            g = MySum(e, n - 1);
        else
            g = MySum(e * 10, n - 1);
        if (f <= g)
            sum = a + g;
        else
            sum = b + f;
        return sum;
    }
}

int IntRevs(int n)
{
    int m, num = 0;
    if (0 == n)
        num = 0;
    for (n; n >= 10; n /= 10)
    {
        m = n % 10;
        num = 10 * num + m;
    }
    m = n % 10;
    num = 10 * num + m;
    return num;
}