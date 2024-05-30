#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

double power(double n, int p) {

	//��������
	double pow = 1;
	int i;
	bool negative;//�ж�p������
	if (p == 0) {
		return 1;
	}
	if (n == 0) 
		return 0;
	if (p < 0) {

		p = -p;
		negative = true;
	}
	else 
		negative = false;
	for (i = 1; i <= p; i++) 
		pow *= n;
	if (negative) 
		return 1 / pow;
	else 
		return pow;

}
int main() {

	//1.��6�µĳ����嵥6.20�У�power()��������һ��double��������������
	/*���ݡ��Ľ��ú�����ʹ������ȷ���㸺�ݡ����⣬����Ҫ����0���κδ���
		��Ϊ0���κ�����0���ݶ�Ϊ1������Ӧ����0��0����δ���壬��˰Ѹ�ֵ��
		��Ϊ1����Ҫʹ��һ��ѭ�������ڳ����в��Ըú�����*/
	double x, xpow;
	int exp;
	printf("������һ��������ƽ������\n");
	printf("��q�˳���\n");
	while (scanf_s("%lf%d", &x, &exp) == 2) {

		if (x == 0 && exp == 0) {

			printf("0 to power 0 is undefined.\n");

		}
		else {

			xpow = power(x, exp);//��������
			printf("%.3g to the power %d is %.5g\n", x, exp, xpow);

		}
		printf("Enter next pair of numbers or q to quit.\n");

	}
	printf("Hope you enjoyed this power trip -- bye!\n");
}