#include <stdio.h>

//������ʵ��
int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//��Ķ���
#define MAX(X,Y) (X>Y?X:Y)

int main()
{
	//int a = MAX;
	int a = 10;
	int b = 20;
	//����
	int max = MAX(a, b);
	printf("max = %d\n", max);
	//���ʵ��
	max = MAX(a, b);
	//max = (a>b?a:b);
	printf("max = %d\n", max);
	return 0;
}