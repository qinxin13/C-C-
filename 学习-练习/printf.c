#include<stdio.h>

int main() {
	
	//①用科学计数法表示用户年龄的秒数
	/*float f_age = 3.156e+7;
	int age = 0;
	printf("请输入您的年龄：");
	scanf_s("%d", &age);
	printf("年龄对应的描述为：%e秒\n", age * f_age);*/

	//②提示用户输入水的重量，并显示水分子的数量 
	//用water表示水分子，kua表示一夸脱水的重量，最终用科学计数法进行表示
	//float water = 3.0e-23;
	//int kua = 952;
	//int i_water = 0;
	//printf("请输入水的夸脱数：");
	//scanf_s("%d", &i_water);
	//printf("水分子的数量是%e个\n", (kua * i_water) / water);
	

	//③1英寸=2.54厘米

	//在美国的体积测量系统中，一品脱=2杯，1杯=8盎司，1盎司=2大汤勺，
	//1大汤勺=3茶勺。编写一个程序，提示用户输入杯数，并以品脱，盎司，汤勺
	//茶勺为单位显示等价容量。
	float f_cup = 0.0;
	printf("请输入杯数：");
	scanf_s("%f", &f_cup);
	printf("可以折算为%f品脱\n", f_cup / 2);
	printf("可以折算为%f盎司\n", f_cup * 8);
	printf("可以折算为%f汤勺\n", f_cup * 16);
	printf("可以折算为%f品脱\n", f_cup * 48);

	return 0;

}