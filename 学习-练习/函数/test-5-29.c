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

	//6.��д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������
	/*Сֵ�����1���������м�ֵ�����2�����������ֵ�����3��������*/
	/*double a, b, c;
	printf("����������double������\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	swap(&a, &b, &c);
	printf("a=%lf,b=%lf,c=%lf\n", a, b, c);*/
	
	//7.��дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ
	/*����ÿ���ַ��Ƿ�����ĸ������ǣ���Ҫ�������ĸ����ĸ���е���ֵλ
		�á����磬c��C����ĸ���е�λ�ö���3���ϲ�һ����������һ���ַ���Ϊ
		������������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻� - 1��*/
	FILE* fp;
	errno_t err;
	char fname[50];
	char ch;

	printf("�����ļ�����");
	scanf_s("%s", fname);
	fp = fopen_s(NULL, fname, "r");
	if (fp == NULL) {

		printf("���ļ�ʧ��\n");
		exit(1);

	}
	//getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp)) != EOF) {

		int index;
		if ((index = char_to_index(ch)) > 0) {
			printf("%c is a alpha,it's index is %d.\n", ch, index);

		}
		fclose(fp);//�ر��ļ�

	}


	return 0;

}