#include <stdio.h>

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//ָ�����-��ŵ�ַ�ı���
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//*p = 20;//* - �����ò�����
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