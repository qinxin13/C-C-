//ʹ��*���η�ʹ����ֶα��
#include<stdio.h>

int main() {

	unsigned width, precision;

	int number = 256;

	int n;

	double weight = 243.5;

	printf("����һ�����ֵ��\n");//6

	scanf_s("%d", &width);

	printf("ֵ�ǣ�%*d:\n", width, number);//width�ṩ�ֶο�ȣ�number�Ǵ���ӡ������

	printf("���������Ⱥ�precision:\n");//8 3

	scanf_s("%d%d", &width, &precision);

	printf("weight=%*.*f\n", width, precision, weight);

	printf("ִ��!\n");

	printf("��������������:\n");

	scanf_s("%*d %*d %d",&n);

	printf("���������ǣ�%d\n", n);

	return 0;

}