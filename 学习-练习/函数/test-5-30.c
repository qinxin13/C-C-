#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

double power(double n, int p) {

	//函数定义
	double pow = 1;
	int i;
	bool negative;//判断p的正负
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

	//1.第6章的程序清单6.20中，power()函数返回一个double类型数的正整数
	/*次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂
		都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处
		理为1）。要使用一个循环，并在程序中测试该函数。*/
	double x, xpow;
	int exp;
	printf("请输入一个数和正平方数：\n");
	printf("按q退出：\n");
	while (scanf_s("%lf%d", &x, &exp) == 2) {

		if (x == 0 && exp == 0) {

			printf("0 to power 0 is undefined.\n");

		}
		else {

			xpow = power(x, exp);//函数调用
			printf("%.3g to the power %d is %.5g\n", x, exp, xpow);

		}
		printf("Enter next pair of numbers or q to quit.\n");

	}
	printf("Hope you enjoyed this power trip -- bye!\n");
}