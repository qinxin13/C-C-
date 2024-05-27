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

	//1.设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单
	//的驱动程序中测试该函数。
	/*double x, y;
	printf("请输入两个double类型的值x,y:\n");
	scanf_s("%lf %lf", &x, &y);
	min(x, y);
	printf("x和y中比较小的值是%lf\n", min(x, y));*/

	//2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱
	//动程序中测试该函数
	char ch;
	int i, j;
	printf("请输入一个字符：\n");
	scanf_s("%c", &ch);
	printf("请输入行数和列数：\n");
	scanf_s("%d %d", &i, &j);
	chline(ch, i, j);

	return 0;
}