#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	while (r <= 0)
//	{
//		printf("请再次输入");
//		scanf("%lf", &r);
//	}
//	double s = 3.14 * r * r;
//	printf("%.2f", s);
//	return 0;
//}

//为了防止输入负数引进了while循环，但效果不好；
//因为如果输入字符串，则条件判断恒为0（假），但
//字符一直存储在缓冲区里不断判断（被scanf提取）；
//导致没有输入下一个数据的机会，陷入死循环；
//所以我们引进return -1；

int main()
{
	double r = 0;
	if (!scanf("%lf", &r))
		return -1;
	while (r <= 0)
	{
		if (!scanf("%lf", &r))
			return -1;
	double s = 3.14 * r * r;
	printf("%.2f", s);
	}
	return 0;
}
