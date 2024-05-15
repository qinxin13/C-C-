#include<stdio.h>

void display(char cr, int lines, int width) {

	int row, col;
	for (row = 1; row <= lines; row++) {
		for (col = 1; col <= width; col++) {
			putchar(cr);
		}
		putchar('\n');
	}

}
int main() {

	//按指定的行列打印字符
	int ch;//带打印的字符
	int rows, cols;//行数和列数
	printf("输入字符和行数列数：\n");
	while ((ch = getchar()) != '\n') {

		if (scanf_s("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n');
		continue;
		printf("输入一个字符和行数列数\n");
		printf("输入一个新行退出\n");

	}
	printf("GoodBye\n");
	return 0;

}