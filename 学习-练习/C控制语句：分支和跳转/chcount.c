#include<stdio.h>
#define PERIOD '.'
//使用逻辑运算符计算字符串中有多少字符，除开双引号和单引号
int main() {

	char ch;
	int count = 0;
	while ((ch = getchar()) != PERIOD) {

		if (ch != '"' && ch != '\'')
		{
			count++;
		}

	}
	printf("一共有%d个无引号字符\n", count);
	return 0;
}