#include<stdio.h>
#include<stdlib.h>
//double min(double x, double y) {
//
//	return x < y ? x : y;
//
//}
void chline(char ch, int i, int j) {

	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			putchar(ch);
		}
		putchar('\n');
	}

}

int main() {

	//1.���һ������min(x, y)����������double����ֵ�Ľ�Сֵ����һ����
	//�����������в��Ըú�����
	/*double x, y;
	printf("����������double���͵�ֵx,y:\n");
	scanf_s("%lf %lf", &x, &y);
	min(x, y);
	printf("x��y�бȽ�С��ֵ��%lf\n", min(x, y));*/

	//2.���һ������chline(ch, i, j)����ӡָ�����ַ�j��i�С���һ���򵥵���
	//�������в��Ըú���
	char ch;
	int i, j;
	printf("������һ���ַ���\n");
	scanf_s("%c", &ch);
	printf("������������������\n");
	scanf_s("%d %d", &i, &j);
	chline(ch, i, j);

	return 0;
}