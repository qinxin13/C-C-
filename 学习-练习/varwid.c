//使用*修饰符使输出字段变宽
#include<stdio.h>

int main() {

	unsigned width, precision;

	int number = 256;

	int n;

	double weight = 243.5;

	printf("输入一个宽度值：\n");//6

	scanf_s("%d", &width);

	printf("值是：%*d:\n", width, number);//width提供字段宽度，number是待打印的数字

	printf("现在输入宽度和precision:\n");//8 3

	scanf_s("%d%d", &width, &precision);

	printf("weight=%*.*f\n", width, precision, weight);

	printf("执行!\n");

	printf("请输入三个整数:\n");

	scanf_s("%*d %*d %d",&n);

	printf("最后的整数是：%d\n", n);

	return 0;

}