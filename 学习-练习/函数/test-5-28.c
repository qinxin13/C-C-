#include<stdio.h>
#include<stdlib.h>

//void printCh(char ch, int i, int j) {
//
//	int col, row;
//	for (row = 0; row < j; row++) {
//		
//		for (col = 0; col < i; col++) {
//
//			putchar(ch);
//
//		}
//		putchar('\n');
//
//	}
//
//}
//double daoS(double i, double j) {
//
//	double x, y, average, sum;
//	x = 1 / i;
//	y = 1 / j;
//	average = (x + y) / 2;
//	sum = 1 / average;
//	return sum;
//
//}

//void large_of(double *x, double *y) {
//
//	(*x > *y )? (*y = *x) : (*x = *y);
//
//}
//int main() {

	//1.��дһ������������3��������һ���ַ��������������ַ������Ǵ�
	/*��ӡ���ַ�����1������ָ��һ���д�ӡ�ַ��Ĵ�������2������ָ����ӡָ
		���ַ�����������дһ�����øú����ĳ���*/
	/*char ch;
	int i, j;
	printf("������һ��ָ�����ַ���\n");
	scanf_s("%c", &ch);
	printf("������������������\n");
	scanf_s("%d %d", &i, &j);
	printCh(ch, i, j);*/

	//4.�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ�������������
	/*��ƽ��ֵ�����ȡ�������ĵ�������дһ����������������double���͵�
		���������������������ĵ���ƽ������*/
	/*double i, j;
	printf("����������double����\n");
	scanf_s("%lf %lf", &i, &j);
	double sum=daoS(i, j);
	printf("�����sum=%lf.\n", sum);
	return 0;*/

	//5.��д������һ������larger_of()���ú���������double���ͱ�����ֵ��
	/*��Ϊ�ϴ��ֵ�����磬 larger_of(x, y)���x��y�нϴ��ֵ���¸���������
		����*/
	/*double x, y;
	printf("����������double���͵�ֵ��\n");
	scanf_s("%lf %lf", &x, &y);
	large_of(&x, &y);
	printf("���ڵ�x=%lf,y=%lf\n",x,y);
	return 0;*/
}
