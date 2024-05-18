#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

	//下面的一些程序要求输入以EOF终止。如果你的操作系统很难或根本无
	//	法使用重定向，请使用一些其他的测试来终止输入，如读到& 字符时停止。
	//1.设计一个程序，统计在读到文件结尾之前读取的字符数。
	FILE* in;
	in = fopen_s(&in,"123.txt", "r");
	char ch;
	long n = 0;
	while ((ch = getc(in)) != EOF) {

		n++;

	}
	fclose(in);
	printf("%ld\n", n);
	return 0;
}