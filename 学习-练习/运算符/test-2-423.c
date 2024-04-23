#include<stdio.h>
#define MIN_PER_HOUR 60
#define DAY_PER_WEK 7
#define CONVERT 0.3937


//求数的立方值
//double squre(double x) {
//	double s = x * x * x;
//	return s;
//}
int main() {

	//1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
	//间。使用#define或const创建一个表示60的符号常量或const变量。通过while
	//循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
	/*int hour, min, time;
	printf("请输入您想表示时间的分钟数：");
	scanf_s("%d", &time);
	while (time > 0) {
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;
		printf("%d时间是%dh%dmin\n", time, hour, min);
		printf("请输入下一个你想输入的时间（0退出）：");
		scanf_s("%d", &time);
	}*/

	//2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
	/*10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和
		15）。要求打印的各值之间用一个空格、制表符或换行符分开*/

	//int n =0;
	//int num = n+11;
	//printf("请输入一个整数：");
	//scanf_s("%d", &n);
	//while (n<= num) {

	//	printf("%d ", n);
	//	
	///*	printf("%d\t", n);
	//	printf("%d\n", n);*/
	//	n++;
	//}
	//printf("\n");

	//3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例
	//如，用户输入18，则转换成2周4天。以下面的格式显示结果

	/*int sum ,wek,day;
	printf("请输入天数：");
	scanf_s("%d", &sum);
	while (sum > 0) {
		wek = sum / DAY_PER_WEK;
		day = sum % DAY_PER_WEK;
		printf("%d天有%d周,%d天\n", sum, wek, day);
		printf("请输入下一个你想输入的天数（0退出）：");
		scanf_s("%d", &sum);
	}*/
	
	//4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘
	/*米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身
		高，直到用户输入一个非正值*/

	/*float height=0, inch;
	int feet;
	printf("请输入身高：");
	scanf_s("%f", &height);
	while (height > 0) {
		feet = height / 31;
		inch = CONVERT * height - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		printf("请输入下一个身高值（0退出)：");
		scanf_s("%f", &height);

	}*/

	//5.修改程序addemup.c（程序清单5.13），你可以认为addemup.c是计算20
		/*天里赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类
		推）。修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，
		用读入的一个变量来代替20）。*/
	/*int day = 0, money=0, upper_limmt;
	printf("请输入天数：");
	scanf_s("%d", &upper_limmt);
	while (day++ < upper_limmt)
	{
		money = money + day;
	}
	printf("%d\n", money);*/

	//6./*.修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚
		/*$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。C没有平方函
		数，但是可以用n * n来表示n的平方。*/
	/*int day = 0, money = 0, upper_limmt;
	printf("请输入天数：");
	scanf_s("%d", &upper_limmt);
	while (day++ < upper_limmt)
	{
		money = money + day*day;
	}
	printf("%d\n", money);*/

	//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立
	/*方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
		传递给该函数。*/

	/*double n = 0;
	double sum;
	printf("请输入一个double类型的数：");
	scanf_s("%lf", &n);
	sum = squre(n);
	printf("%f", sum);*/

	return 0;

}