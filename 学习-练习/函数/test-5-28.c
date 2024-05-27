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

	//1.编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待
	/*打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指
		定字符的行数。编写一个调用该函数的程序*/
	/*char ch;
	int i, j;
	printf("请输入一个指定的字符：\n");
	scanf_s("%c", &ch);
	printf("请输入列数和行数：\n");
	scanf_s("%d %d", &i, &j);
	printCh(ch, i, j);*/

	//4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数
	/*的平均值，最后取计算结果的倒数。编写一个函数，接受两个double类型的
		参数，返回这两个参数的调和平均数。*/
	/*double i, j;
	printf("请输入两个double数：\n");
	scanf_s("%lf %lf", &i, &j);
	double sum=daoS(i, j);
	printf("结果是sum=%lf.\n", sum);
	return 0;*/

	//5.编写并测试一个函数larger_of()，该函数把两个double类型变量的值替
	/*换为较大的值。例如， larger_of(x, y)会把x和y中较大的值重新赋给两个变
		量。*/
	/*double x, y;
	printf("请输入两个double类型的值：\n");
	scanf_s("%lf %lf", &x, &y);
	large_of(&x, &y);
	printf("现在的x=%lf,y=%lf\n",x,y);
	return 0;*/
}
