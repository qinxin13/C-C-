#include<stdio.h>
//#include<string.h>
//验证一些浮点修饰符的组合
int main() {

	const double RENT = 1.99;//const变量
	char arr[] = "NAME";
	float mon = 2333.333;
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);

	printf("%s家庭每个月收入为￥%.2f\n", arr, mon);

	return 0;

}