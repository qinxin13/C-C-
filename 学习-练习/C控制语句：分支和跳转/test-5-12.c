#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	//1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类
	//别，每个类别有两个等级。例如，一位工资为20000美元的单身纳税人，应缴纳税费
	/*0.15×17850 + 0.28×（20000−17850）美元。编写一个程序，让用户指定缴纳
	税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。*/

	float income, tax_r, tax;
	int type;
	printf("***************************************************\n");
	printf("1)单身     2)户主\n3)已婚，共有    4)已婚，离异\n5)退出\n");
	printf("***************************************************\n");
	printf("输入类型：");
	while (scanf_s("%d", &type) == 1) {

		int x = 1;
		while (x) {

			switch (type) {

			case 1:
				tax_r = 17850.0;
				x = 0;
				break;
			case 2:
				tax_r = 23900.0;
				x = 0;
				break;
			case 3:
				tax_r = 29750.0;
				x = 0;
				break;
			case 4:
				tax_r = 14875.0;
				x = 0;
				break;
			case 5:
				return 0;
			default:
				printf("请输入1-5的数：");
				scanf_s("%d", &type);

			}

		}
		printf("输入收入：");
		scanf_s("%f", &income);
		if (income > tax_r) {

			tax = tax_r * 0.15 + (income - tax_r) * 0.28;
		}
		else {

			tax = income * 0.15;
		}
		printf("税金一共是%.2f美元\n", tax);
		printf("请再次输入1-4的数字或者5退出：\n");

	}
	return 0;

}