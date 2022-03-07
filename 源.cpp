#include <stdio.h>

//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	struct Book b1 = { "C语言程序设计", 55 };
	/*struct Book* pb = &b1;
	//利用pb打印书名和价格
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/
	//. 结构体变量.成员
	//-> 结构体指针-> 成员
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	return 0;
}