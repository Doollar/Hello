#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	while (r <= 0)
//	{
//		printf("���ٴ�����");
//		scanf("%lf", &r);
//	}
//	double s = 3.14 * r * r;
//	printf("%.2f", s);
//	return 0;
//}

//Ϊ�˷�ֹ���븺��������whileѭ������Ч�����ã�
//��Ϊ��������ַ������������жϺ�Ϊ0���٣�����
//�ַ�һֱ�洢�ڻ������ﲻ���жϣ���scanf��ȡ����
//����û��������һ�����ݵĻ��ᣬ������ѭ����
//������������return -1��

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
