#include<stdio.h>
#include<string.h>//为strlen()提供原型
#define NAME "GIGATHINK INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num) {

	int count;
	for (count = 1; count <= num; count++) {

		putchar(ch);

	}

}

int main() {

	int spaces;
	show_n_char('*', WIDTH);//用符号常量作为参数
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n", NAME);
	spaces = (WIDTH - strlen(ADDRESS)) / 2;//计算要跳过多少空格
	show_n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar('\n');
	return 0;

}