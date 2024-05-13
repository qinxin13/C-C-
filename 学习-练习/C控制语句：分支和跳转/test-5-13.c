#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const float ap = 2.05;
const float bp = 1.15;
const float cp = 1.09;

int main() {

	//ABC 邮购杂货店出售的洋蓟售价为 2.05 美元/磅，甜菜售价为 1.15
	/*美元 / 磅，胡萝卜售价为 1.09美元 / 磅。在添加运费之前，100美元的订单有
		5 % 的打折优惠。少于或等于5磅的订单收取6.5美元的运费和包装费，5磅～
		20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上
		每续重1磅增加0.5美元。编写一个程序，在循环中用switch语句实现用户输
		入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b
		是甜菜的磅数，c是胡萝卜的磅数，q 是退出订购。程序要记录累计的重
		量。即，如果用户输入 4 磅的甜菜，然后输入 5磅的甜菜，程序应报告9磅
		的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装
		费。随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：
		磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装
		费，以及所有的费用总额*/
	char ch;
	float sum=0.0, discount, df;
	int an = 0, bn = 0, cn = 0, sn = 0, n;
	while ((ch = getchar()) != 'q') {

		switch (ch) {

		case 'a':
			printf("\ninput n:");
			scanf_s("%d", &n);
			an += n;
			sn += n;
			sum += ap * n;
			break;
		case 'b':
			printf("\ninput n:");
			scanf_s("%d", &n);
			bn += n;
			sn += n;
			sum += bp * n;
			break;
		case 'c':
			printf("\ninput n:");
			scanf_s("%d", &n);
			cn += n;
			sn += n;
			sum += cp * n;
			break;
		default:
			printf("输入a-c继续或者q退出：");

		}
		getchar();
	}
	if (sum > 100)
	{
		discount = 0.05 * sum;
	}
	else {
		discount = 0.0;
	}
	if (sn <= 5) {

		df = 6.5;
	}
	else if (sn < 20) {

		df = 14.0;
	}
	else {

		df = 14.0 + (sn - 20) * 0.5;
	}
	printf("ap=%.2f,bp=%.2f,cp=%.2f\n", ap, bp, cp);
	printf("an=%d,bn=%d,cn=%d\n", an, bn, cn);
	printf("a is %.2f,b is %.2f,c is %.2f\n", ap * an, bp * bn, cp * cn);
	printf("sum is %.2f,discount is %.2f,df is %.2f\n", sum, discount, df);
	return 0;
}