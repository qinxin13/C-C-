#include<stdio.h>

#define MAXT 40.0
#define GH 10.0
#define FR 300.0
#define SR 450
#define FTR 0.15
#define STR 0.20
#define TTR 0.25

int main() {

	//1..��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ������
	//�˰��;����롣�����¼��裺
	//	a.�������� = 1000��Ԫ / Сʱ
	//	b.�Ӱࣨ����40Сʱ�� = 1.5����ʱ��
	//	c.˰�ʣ� ǰ300��ԪΪ15 %
	//	��150��ԪΪ20%
	//	���µ�Ϊ25 %
	//	��#define������ų��������������Ƿ���ϵ�ǰ��˰����
	//float t, sum, tax, gain;
	//printf("�����빤����ʱ�䣺\n");
	//scanf_s("%f", &t);
	//if (t > MAXT) {

	//	t = MAXT + (t - MAXT) * 1.5;
	//}
	//sum = GH * t;
	//if (sum <= FR) {

	//	tax = sum * FTR;
	//	gain = sum - tax;
	//}
	//else if (sum > FR && sum < SR) {

	//	tax = FR * FTR + (sum - FR) * STR;
	//	gain = sum - tax;

	//}
	//else if (sum > SR) {

	//	tax = FR + FTR + (SR - FR) * STR + (sum - SR) * TTR;
	//	gain = sum - tax;
	//}
	//printf("%-10.2f%-10.2f%-10.2f%-10.2f\n", t, sum, gain, tax);


	//2.�޸���ϰ1�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ
	/*��switch��ɹ��ʵȼ�ѡ�����г������ʾ�Ĳ˵�Ӧ������������
		*****************************************************************
	Enter the number corresponding to the desired pay rate or action:
	1) $8.75 / hr     2) $9.33 / hr
	3) $10.00 / hr    4) $11.20 / hr
	5) quit
	*****************************************************************
		���ѡ�� 1��4 ���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ������
		��Ҫͨ��ѭ�����У������û����� 5��������� 1��5 ��������֣�����Ӧ
		�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣ʹ��#define
		�������ų�����ʾ�����ʵȼ���˰��*/
	float t, sum, tax, gain;
	printf("�����빤��ʱ�䣺\n");
	scanf_s("%f", &t);
	if (t > MAXT) {

		t = MAXT + (t - MAXT) * 1.5;
	}
	float gh;
	int num, f = 0,x = 1; 
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1)$8.75/hr         2)$9.33/hr\n3)$10.00/hr         4)$11.20/hr\n5)quit \n");
	printf("*****************************************************************\n");
	scanf_s("%d", &num);
	while (x) {

		switch (num) {

		case 1:
			gh = 8.75;
			x = 0;
			break;
		case 2:
			gh = 9.33;
			x = 0;
			break;
		case 3:
			gh = 10.00;
			x = 0;
			break;
		case 4:
			gh = 11.20;
			x = 0;
			break;
		case 5:
			return 0;
			break;
		default:
			printf("��������ȷ������1-5��");
			scanf_s("%d", &num);
		}

	}
	sum = gh * t;
	if (sum <= FR) {

		tax = sum * FTR;
		gain = sum - tax;
	}
	else if (sum > FR && sum < SR) {

		tax = FR * FTR + (sum - FR) * STR;
		gain = sum - tax;
	}
	else if (sum > SR) {
		tax = FR * FTR + (SR - FR) * STR + (sum - SR) * TTR;
		gain = sum - tax;
	}
	printf("%-10.2f%-10.2f%-10.2f%-10.2f\n", t, sum, gain, tax);
	return 0;



}