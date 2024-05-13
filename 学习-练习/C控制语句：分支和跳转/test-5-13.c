#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const float ap = 2.05;
const float bp = 1.15;
const float cp = 1.09;

int main() {

	//ABC �ʹ��ӻ�����۵����ۼ�Ϊ 2.05 ��Ԫ/��������ۼ�Ϊ 1.15
	/*��Ԫ / �������ܲ��ۼ�Ϊ 1.09��Ԫ / ����������˷�֮ǰ��100��Ԫ�Ķ�����
		5 % �Ĵ����Żݡ����ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5����
		20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����
		ÿ����1������0.5��Ԫ����дһ��������ѭ������switch���ʵ���û���
		�벻ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b
		����˵İ�����c�Ǻ��ܲ��İ�����q ���˳�����������Ҫ��¼�ۼƵ���
		������������û����� 4 ������ˣ�Ȼ������ 5������ˣ�����Ӧ����9��
		����ˡ�Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ
		�ѡ���󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ��
		�������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ
		�ѣ��Լ����еķ����ܶ�*/
	char ch;
	float sum=0.0, discount, df;
	int an = 0, bn = 0, cn = 0, sn = 0, n;
	while ((ch = getchar()) != 'q') {

		switch (ch) {

		case 'a':
			printf("\ninput n:");
			scanf_s("%d", &n);
			an += n;
			sn += n;
			sum += ap * n;
			break;
		case 'b':
			printf("\ninput n:");
			scanf_s("%d", &n);
			bn += n;
			sn += n;
			sum += bp * n;
			break;
		case 'c':
			printf("\ninput n:");
			scanf_s("%d", &n);
			cn += n;
			sn += n;
			sum += cp * n;
			break;
		default:
			printf("����a-c��������q�˳���");

		}
		getchar();
	}
	if (sum > 100)
	{
		discount = 0.05 * sum;
	}
	else {
		discount = 0.0;
	}
	if (sn <= 5) {

		df = 6.5;
	}
	else if (sn < 20) {

		df = 14.0;
	}
	else {

		df = 14.0 + (sn - 20) * 0.5;
	}
	printf("ap=%.2f,bp=%.2f,cp=%.2f\n", ap, bp, cp);
	printf("an=%d,bn=%d,cn=%d\n", an, bn, cn);
	printf("a is %.2f,b is %.2f,c is %.2f\n", ap * an, bp * bn, cp * cn);
	printf("sum is %.2f,discount is %.2f,df is %.2f\n", sum, discount, df);
	return 0;
}