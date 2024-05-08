#include<stdio.h>
#include<stdlib.h>

int main() {

	//1.使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句
	/*号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换*/
	//int count = 0;
	//char ch;
	//printf("请输入：");
	//while ((ch = getchar()) != '#') {

	//	if (ch == '.') {

	//		ch = '!';
	//		putchar(ch);
	//		count++;
	//	}
	//	else if (ch == '!') {

	//		//ch = '!!';
	//		putchar('!');
	//		putchar('!');
	//		count++;

	//	}
	//	else {

	//		putchar(ch);
	//	}

	//}
	////printf("%c", ch);
	//printf("最后进行了%d次替换\n", count);


	//2.使用switch重写练习1
	/*char ch;
	int count = 0;
	while ((ch = getchar()) != '#') {

		switch (ch) {

		case '.':
			putchar('!');
			count++;
			break;
		case '!':
			putchar('!');
			putchar('!');
			count++;
			break;
		defalut:
			putchar(ch);
		}
	}
	printf("最后进行了%d次替换\n", count);*/

	//3.编写程序读取输入，读到#停止，报告ei出现的次数。
	/*注意该程序要记录前一个字符和当前字符。用“Receive your eieio award”这
	样的输入来测试*/

	/*int count = 0, flag = 0;
	char ch;
	printf("请输入：\n");
	while ((ch = getchar()) != '#') {

		if (ch == 'e') {

			flag = 1;
		}
		else if (ch == 'i') {

			if (flag == 1) {
				count++;
				flag = 0;
			}
		}

	}
	printf("ei一共出现了%d次\n", count);*/

	return 0;

}