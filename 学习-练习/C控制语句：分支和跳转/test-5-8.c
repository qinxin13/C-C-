#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	////1.编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
	//换行符数和所有其他字符的数量。
	//char ch;
	//int count = 0,hh=0,qt=0;
	//printf("请输入：");
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

    //2.编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字
    //符以及对应的ASCII码（十进制）。一行打印8个字符。建议:使用字符计数
    //和求模运算符（% ）在每8个循环周期时打印一个换行符。
	//char ch;
	//int t = 1;
	//printf("请输入：");
	//while ((ch = getchar()) != '#') {

	//	//printf("%c:", ch);
	//	putchar(ch);
	//	printf("%d  ", ch);
	//	if(! (t++ % 8)) {
	//		printf("\n");
	//	}
	//}

	////3.编写一个程序，读取整数直到用户输入 0。输入结束后，程序应报告
	//用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及
	//	其奇数的平均值

	int n;
	int o_count = 0,g_count=0,o_sum=0,g_sum=0;
	double o_average=0.0, g_average=0.0;
	printf("请输入：");
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