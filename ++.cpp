#include <stdio.h>

//int main()
//{
//	int a = 10;
//	//int b = a++; //后置++，先使用，再++ 11 10
//	int b = ++a;  //前置++，先++，再使用 11 11
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

int main()
{
	int a = 100;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);
	/*if (a > b)
		max = a;
	else
		max = b;*/
	printf("%d\n", max);
	return 0;
}