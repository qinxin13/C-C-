#include<stdio.h>
#define MIN_PER_HOUR 60
#define DAY_PER_WEK 7
#define CONVERT 0.3937


//����������ֵ
//double squre(double x) {
//	double s = x * x * x;
//	return s;
//}
int main() {

	//1.��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ
	//�䡣ʹ��#define��const����һ����ʾ60�ķ��ų�����const������ͨ��while
	//ѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
	/*int hour, min, time;
	printf("�����������ʾʱ��ķ�������");
	scanf_s("%d", &time);
	while (time > 0) {
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;
		printf("%dʱ����%dh%dmin\n", time, hour, min);
		printf("��������һ�����������ʱ�䣨0�˳�����");
		scanf_s("%d", &time);
	}*/

	//2.��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����
	/*10���������������磬�û�����5�����ӡ5��15����������������5��
		15����Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ�*/

	//int n =0;
	//int num = n+11;
	//printf("������һ��������");
	//scanf_s("%d", &n);
	//while (n<= num) {

	//	printf("%d ", n);
	//	
	///*	printf("%d\t", n);
	//	printf("%d\n", n);*/
	//	n++;
	//}
	//printf("\n");

	//3.��дһ��������ʾ�û�����������Ȼ����ת������������������
	//�磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ���

	/*int sum ,wek,day;
	printf("������������");
	scanf_s("%d", &sum);
	while (sum > 0) {
		wek = sum / DAY_PER_WEK;
		day = sum % DAY_PER_WEK;
		printf("%d����%d��,%d��\n", sum, wek, day);
		printf("��������һ�����������������0�˳�����");
		scanf_s("%d", &sum);
	}*/
	
	//4.��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ�����
	/*�׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������
		�ߣ�ֱ���û�����һ������ֵ*/

	/*float height=0, inch;
	int feet;
	printf("��������ߣ�");
	scanf_s("%f", &height);
	while (height > 0) {
		feet = height / 31;
		inch = CONVERT * height - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		printf("��������һ�����ֵ��0�˳�)��");
		scanf_s("%f", &height);

	}*/

	//5.�޸ĳ���addemup.c�������嵥5.13�����������Ϊaddemup.c�Ǽ���20
		/*����׬����Ǯ�ĳ��򣨼����1��׬$1����2��׬$2����3��׬$3���Դ���
		�ƣ����޸ĳ���ʹ��������û������������û�����������м��㣨����
		�ö����һ������������20����*/
	/*int day = 0, money=0, upper_limmt;
	printf("������������");
	scanf_s("%d", &upper_limmt);
	while (day++ < upper_limmt)
	{
		money = money + day;
	}
	printf("%d\n", money);*/

	//6./*.�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬
		/*$1����2��׬$4����3��׬$9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ����
		�������ǿ�����n * n����ʾn��ƽ����*/
	/*int day = 0, money = 0, upper_limmt;
	printf("������������");
	scanf_s("%d", &upper_limmt);
	while (day++ < upper_limmt)
	{
		money = money + day*day;
	}
	printf("%d\n", money);*/

	//7.��дһ��������ʾ�û�����һ��double���͵���������ӡ��������
	/*��ֵ���Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ
		���ݸ��ú�����*/

	/*double n = 0;
	double sum;
	printf("������һ��double���͵�����");
	scanf_s("%lf", &n);
	sum = squre(n);
	printf("%f", sum);*/

	return 0;

}