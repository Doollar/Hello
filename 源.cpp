#include <stdio.h>

//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	struct Book b1 = { "C���Գ������", 55 };
	/*struct Book* pb = &b1;
	//����pb��ӡ�����ͼ۸�
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/
	//. �ṹ�����.��Ա
	//-> �ṹ��ָ��-> ��Ա
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	return 0;
}