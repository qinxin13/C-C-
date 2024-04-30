#include<stdio.h>

//float end(float x, float y) {
//	float result;
//	result = (x - y) / (x * y);
//	return result;
//}
float formulas1(int x);
float formulas2(int y);
int main() {

	//1.编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
	//float a, b, result;
	//printf("请输入两个浮点数：");
	//while (scanf_s("%f%f", &a, &b) == 2) {
	//	result = (a - b) / (a * b);
	//	printf("%f\n", result);
	//	printf("请输入两个浮点数：");
	//	//scanf_s("%f%f", &a, &b);
	//
	//}

	//2.修改练习1，使用一个函数返回计算的结果
	/*float a, b, result;
	printf("请输入两个浮点数：");
	while (scanf_s("%f%f", &a, &b) == 2) {
		result = end(a, b);
		printf("%f\n", result);
		printf("请输入两个浮点数：");
	}*/

	//3.编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数
	/*int group[8], i;
	printf("请输入8个整数：");
	for (i = 0; i < 8; i++) {

		scanf_s("%d", &group[i]);
	}
	for (i = 7; i >= 0; i--) {

		printf("%d ", group[i]);
	}
	printf("\n");*/

	//4.
	int times;
	printf("请输入执行多少次：");
	while (scanf_s("%d", &times) == 1 && times > 0) {
		printf("%f %f\n", formulas1(times), formulas2(times));
		printf("请输入执行多少次：");
	}

	return 0;

}
float formulas1(int x) {

	int i;
	float sum = 0.0;
	for (i =1; i <= x; i++) {
		sum += 1.0 / i;
	}
	return sum;

}
float formulas2(int y) {

	int i, j = -1;
	float sum = 0.0;
	for (i =1; i <= y; i++) {
		j *= -1;
		sum += (1.0 / i) * j;
	}
	return sum;

}