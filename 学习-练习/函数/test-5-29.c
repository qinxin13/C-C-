#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//void swap(double* a, double* b, double* c) {
//
//	double temp;
//	if (*a > *b) {
//
//		if (*b > *c) {
//			temp = *a;
//			*a = *c;
//			*c = temp;
//		}
//		else if(*c>*b) {
//			if (*a > *c) {
//				temp = *a;
//				*a = *b;
//				*b = *c;
//				*c = *a;
//			}
//			else{
//				temp = *a;
//				*a = *b;
//				*b = temp;
//			}
//		}
//	}
//	else if(*b>*a) {
//
//		if (*a > *c) {
//
//			temp = *a;
//			*a = *c;
//			*c = *b;
//			*b = temp;
//		}
//		else if(*c>*a){
//			if (*b > *c) {
//				temp = *b;
//				*b = *c;
//				*c = temp;
//			}
//		
//		}
//
//	}
//
//}

int char_to_index(char ch) {

	if (isalpha(ch)) {

		if (isupper(ch)) {

			return ch - 'A' + 1;
		}
		else {

			return ch - 'a' + 1;
		}

	}
	else
		return -1;
}
int main() {

	//6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最
	/*小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。*/
	/*double a, b, c;
	printf("请输入三个double变量：\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	swap(&a, &b, &c);
	printf("a=%lf,b=%lf,c=%lf\n", a, b, c);*/
	
	//7.编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要
	/*报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位
		置。例如，c和C在字母表中的位置都是3。合并一个函数，以一个字符作为
		参数，如果该字符是一个字母则返回一个数值位置，否则返回 - 1。*/
	FILE* fp;
	errno_t err;
	char fname[50];
	char ch;

	printf("输入文件名：");
	scanf_s("%s", fname);
	fp = fopen_s(NULL, fname, "r");
	if (fp == NULL) {

		printf("打开文件失败\n");
		exit(1);

	}
	//getc(fp)从打开的文件中获取一个字符
	while ((ch = getc(fp)) != EOF) {

		int index;
		if ((index = char_to_index(ch)) > 0) {
			printf("%c is a alpha,it's index is %d.\n", ch, index);

		}
		fclose(fp);//关闭文件

	}


	return 0;

}