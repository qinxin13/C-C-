#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//全局变量
int a = 10;
int main() {
	/*printf("hello world");
	return 0;*/

	/*printf("%d/\n",sizeof(int));
	printf("%d/\n",sizeof(float));
	printf("%d/\n",sizeof(long));
	printf("%d/\n",sizeof(long long));
	printf("%d/\n",sizeof(char));
	printf("%d/\n",sizeof(double));
	printf("%d/\n",sizeof(short));*/

	//变量 （局部变量）
	//short age = 20;//年龄
	//int height = 180;//身高
	//float weight = 78.4;//体重

	int num1 = 10;
	int num2 = 30;
	scanf("%d %d", &num1, &num2);
	//求和
	int sum = num1 + num2;
	//输出
	printf("%d\n", sum);
	return 0;
}