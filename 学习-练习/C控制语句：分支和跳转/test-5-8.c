#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	////1.��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո�����
	//���з��������������ַ���������
	//char ch;
	//int count = 0,hh=0,qt=0;
	//printf("�����룺");
	//while ((ch = getchar())!= '#') {
	//	/*if (getchar() == '#')
	//		continue;*/
	//	
	//	switch (ch) {

	//	case ' ':
	//		count++;
	//		break;
	//	case '\n':
	//		hh++;
	//		break;
	//	default:
	//		qt++;
	//	}
	//}
	//printf("%-5d%-5d%-5d\n", count, hh, qt);

    //2.��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ���������
    //���Լ���Ӧ��ASCII�루ʮ���ƣ���һ�д�ӡ8���ַ�������:ʹ���ַ�����
    //����ģ�������% ����ÿ8��ѭ������ʱ��ӡһ�����з���
	//char ch;
	//int t = 1;
	//printf("�����룺");
	//while ((ch = getchar()) != '#') {

	//	//printf("%c:", ch);
	//	putchar(ch);
	//	printf("%d  ", ch);
	//	if(! (t++ % 8)) {
	//		printf("\n");
	//	}
	//}

	////3.��дһ�����򣬶�ȡ����ֱ���û����� 0����������󣬳���Ӧ����
	//�û������ż���������� 0����������Щż����ƽ��ֵ�����������������
	//	��������ƽ��ֵ

	int n;
	int o_count = 0,g_count=0,o_sum=0,g_sum=0;
	double o_average=0.0, g_average=0.0;
	printf("�����룺");
	while (scanf_s("%d",&n) &&n) {

		if (n % 2 == 0) {
			o_count++;
			o_sum += n;
			o_average = o_sum /(double) o_count;
		}
		else {

			g_count++;
			g_sum += n;
			g_average = g_sum /(double)g_count;
		}
		
	}
	printf("o_count=%d,o_average=%f,g_count=%d,g_average=%f\n", o_count, o_average, g_count, g_average);
	return 0;
}