#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

	//下面的一些程序要求输入以EOF终止。如果你的操作系统很难或根本无
	//	法使用重定向，请使用一些其他的测试来终止输入，如读到& 字符时停止。
	//1.设计一个程序，统计在读到文件结尾之前读取的字符数。
	/*FILE* in;
	errno_t er;
	err = fopen_s(&in,"123.txt", "r");
	char ch;
	long n = 0;
	while ((ch = getc(in)) != EOF) {

		n++;

	}
	fclose(in);
	printf("%ld\n", n);*/

	////2..编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。程序要
	//打印每个输入的字符及其相应的ASCII十进制值。注意，在ASCII序列中，空
	//	格字符前面的字符都是非打印字符，要特殊处理这些字符。如果非打印字符
	//	是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法。例
	//	如，ASCII的1是Ctrl + A，可显示为 ^ A。注意，A的ASCII值是Ctrl + A的值加上
	//	64。其他非打印字符也有类似的关系。除每次遇到换行符打印新的一行之
	//	外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同。）
	//FILE* in;
	//errno_t err;
	//err = fopen_s(&in,"123.txt","r");
	//int n = 0;
	//char ch;
	//while ((ch = getc(in)) != EOF) {

	//	if (ch == '\n') {

	//		putchar('\\');
	//		putchar('n');
	//		printf("%d\n", ch);
	//		n = 0;
	//	}
	//	else if (ch == '\t') {

	//		putchar('\\');
	//		putchar('t');
	//		printf("%d\n", ch);
	//	}
	//	else if (ch < ' ') {

	//		putchar('^');
	//		putchar(ch + 64);
	//		printf("%d\n", ch);
	//	}
	//	else {

	//		putchar(ch);
	//		printf("%d\n", ch);
	//	}
	//	if (++n % 10 == 0) {

	//		n = 0;
	//		putchar('\n');

	//	}


	//}

	//fclose(in);


	//3.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。该程序
	//要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续
	//	的。或者使用ctype.h库中合适的分类函数更方便。
	/*FILE* in;
	errno_t err;
	err = fopen_s(&in, "123.txt", "r");
	char ch;
	int dn = 0, un = 0;
	while ((ch = getc(in)) != EOF) {

		if (isupper(ch)) {

			un++;
		}
		else if (islower(ch)) {

			dn++;
		}

	}
	printf("%d %d\n", un, dn);
	fclose(in);*/
	//4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要
	//报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点
	//	符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，
	//	考虑使用ctype.h系列中的ispunct()函数）。
	FILE* in;
	errno_t err;
	err = fopen_s(&in, "123.txt", "r");
	char ch;
	double sum = 0, sn = 0;
	int f = 0;
	while ((ch = getc(in)) != EOF) {

		if (isupper(ch) || islower(ch)) {

			f = 1;
			sum++;

		}
		else if (f) {
			sn++;
			f = 0;
		}

	}
	double average = (sum) / (sn);
	printf("%.2lf\n", average);
	fclose(in);
	return 0;
}