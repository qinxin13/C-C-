#include<stdio.h>
#include<limits.h>//��������
#include<float.h>//����������

int main() {

	//���ϵͳ����������
	printf("������Σ�%d\n", INT_MAX);
	printf("��С�ĳ������Σ�%lld\n", LLONG_MIN);
	printf("һ�ֽ�=%dbits", CHAR_BIT);
	printf("���˫����ֵ��%e\n", DBL_MAX);
	printf("��С������ֵ��%e\n", FLT_MIN);
	return 0;
}