#include<stdio.h>

//使用break跳出循环
int main() {

	float length, width;
	printf("请输入矩型的长：\n");
	while (scanf_s("%f", &length) == 1) {

		printf("length=%.2f:\n", length);
		printf("输入宽度：\n");
		if (scanf_s("%f", &width) != 1)
		break;
		printf("width=%.2f:\n", width);
		printf("Area=%.2f\n", length * width);
		printf("请输入矩形的长度：\n");
	}
	printf("bye!\n");
	return 0;

}