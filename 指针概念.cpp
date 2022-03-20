#include <stdio.h>

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//指针变量-存放地址的变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));
	return 0;
}