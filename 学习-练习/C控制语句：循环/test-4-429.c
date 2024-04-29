#include<stdio.h>
#include<string.h>
int main() {

	//1
	//char letters='A';
	//int i, j;
	//for (i = 0; i < 6; i++) {

	//	for (j = 0; j < i + 1; j++, letters++) {
	//		//arr[j] = 'A' + j;
	//		printf("%c", letters);
	//	}
	//	printf("\n");
	//}

	//2.编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
	//int i, j,limit;
	//char letters;
	//printf("请输入大写字母：");
	//scanf_s("%c", &letters);
	//limit = letters - 'A' + 1;
	//for (i = 0; i < limit; i++) {

	//	for (j = 0; j < limit - i - 1; j++) {

	//		printf(" ");//打印空格
	//	}
	//	for (j = 0; j <= i; j++) {
	//		printf("%c", 'A' + j);//升序打印字母
	//	}
	//	for (j = i - 1; j >= 0; j--) {
	//		printf("%c", 'A' + j);//降序打印字母
	//	}
	//	printf("\n");

	//}

	//3.编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限。使用一个for循环。
	/*int num, square, cube;
	int upper, lower;
	printf("请输入表格的上下限：");
	scanf_s("%d %d", &upper, &lower);
	printf("num     square     cube\n");

	for (num = lower; num <= upper; num++) {

		square = num * num;
		cube = num * num * num;
		printf("%2d%10d%10d\n", num, square, cube);

	}*/

	//4.编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单
	//词。提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标
	char arr[20];
	int i, n;
	
	printf("请输入一个字符：");
	scanf_s("%s", &arr);
	n = strlen(arr);
	printf("%d", n);
	for (i = n-1; i >= 0; i--) {
		printf("%c", arr[i ]);
	}
	printf("\n");
	return 0;

}