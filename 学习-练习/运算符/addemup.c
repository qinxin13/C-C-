#include<stdio.h>

//几种常见语句
int main() {

	int count, sum;//声明

	count = 0;//表达式语句

	sum = 0;

	while (count++ < 20)   //迭代语句

		sum = sum + count;

		printf("sum=%d\n", sum);//表达式语句

		return 0;//跳转语句

	

}