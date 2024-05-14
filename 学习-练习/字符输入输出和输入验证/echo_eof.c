#include<stdio.h>

int main() {

	//- 重复输入，直到文件结尾 ctrl+z相当于eof
	int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		
	}
	return 0;

}