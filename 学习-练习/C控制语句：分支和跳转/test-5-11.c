#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<string.h>

int main() {

	//1.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
	int n;
	int i, j;
	printf("请输入一个正整数：\n");
	while((scanf_s("%d",&n))==1&&n>0){
		for (i = 2; i <= n; i++) {

			for (j = 2; j < i; j++) {

				if (i % j == 0) {

					break;

				}
			}
			if (i == j) {

				printf("素数有：%d\t", j);

			}
		}
		printf("\n再次输入：");
	}
	return 0;
}