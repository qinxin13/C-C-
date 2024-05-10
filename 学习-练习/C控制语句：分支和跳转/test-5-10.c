#include<stdio.h>

#define MAXT 40.0
#define GH 10.0
#define FR 300.0
#define SR 450
#define FTR 0.15
#define STR 0.20
#define TTR 0.25

int main() {

	//1..编写一个程序，提示用户输入一周工作的小时数，然后打印工资总
	//额、税金和净收入。做如下假设：
	//	a.基本工资 = 1000美元 / 小时
	//	b.加班（超过40小时） = 1.5倍的时间
	//	c.税率： 前300美元为15 %
	//	续150美元为20%
	//	余下的为25 %
	//	用#define定义符号常量。不用在意是否符合当前的税法。
	//float t, sum, tax, gain;
	//printf("请输入工作的时间：\n");
	//scanf_s("%f", &t);
	//if (t > MAXT) {

	//	t = MAXT + (t - MAXT) * 1.5;
	//}
	//sum = GH * t;
	//if (sum <= FR) {

	//	tax = sum * FTR;
	//	gain = sum - tax;
	//}
	//else if (sum > FR && sum < SR) {

	//	tax = FR * FTR + (sum - FR) * STR;
	//	gain = sum - tax;

	//}
	//else if (sum > SR) {

	//	tax = FR + FTR + (SR - FR) * STR + (sum - SR) * TTR;
	//	gain = sum - tax;
	//}
	//printf("%-10.2f%-10.2f%-10.2f%-10.2f\n", t, sum, gain, tax);


	//2.修改练习1的假设a，让程序可以给出一个供选择的工资等级菜单。使
	/*用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
		*****************************************************************
	Enter the number corresponding to the desired pay rate or action:
	1) $8.75 / hr     2) $9.33 / hr
	3) $10.00 / hr    4) $11.20 / hr
	5) quit
	*****************************************************************
		如果选择 1～4 其中的一个数字，程序应该询问用户工作的小时数。程
		序要通过循环运行，除非用户输入 5。如果输入 1～5 以外的数字，程序应
		提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。使用#define
		创建符号常量表示各工资等级和税率*/
	float t, sum, tax, gain;
	printf("请输入工作时间：\n");
	scanf_s("%f", &t);
	if (t > MAXT) {

		t = MAXT + (t - MAXT) * 1.5;
	}
	float gh;
	int num, f = 0,x = 1; 
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1)$8.75/hr         2)$9.33/hr\n3)$10.00/hr         4)$11.20/hr\n5)quit \n");
	printf("*****************************************************************\n");
	scanf_s("%d", &num);
	while (x) {

		switch (num) {

		case 1:
			gh = 8.75;
			x = 0;
			break;
		case 2:
			gh = 9.33;
			x = 0;
			break;
		case 3:
			gh = 10.00;
			x = 0;
			break;
		case 4:
			gh = 11.20;
			x = 0;
			break;
		case 5:
			return 0;
			break;
		default:
			printf("请输入正确的数字1-5：");
			scanf_s("%d", &num);
		}

	}
	sum = gh * t;
	if (sum <= FR) {

		tax = sum * FTR;
		gain = sum - tax;
	}
	else if (sum > FR && sum < SR) {

		tax = FR * FTR + (sum - FR) * STR;
		gain = sum - tax;
	}
	else if (sum > SR) {
		tax = FR * FTR + (SR - FR) * STR + (sum - SR) * TTR;
		gain = sum - tax;
	}
	printf("%-10.2f%-10.2f%-10.2f%-10.2f\n", t, sum, gain, tax);
	return 0;



}