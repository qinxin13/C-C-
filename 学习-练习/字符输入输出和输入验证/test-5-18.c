#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

	//�����һЩ����Ҫ��������EOF��ֹ�������Ĳ���ϵͳ���ѻ������
	//	��ʹ���ض�����ʹ��һЩ�����Ĳ�������ֹ���룬�����& �ַ�ʱֹͣ��
	//1.���һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����
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

	////2..��дһ������������ EOF ֮ǰ����������Ϊ�ַ�����ȡ������Ҫ
	//��ӡÿ��������ַ�������Ӧ��ASCIIʮ����ֵ��ע�⣬��ASCII�����У���
	//	���ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ�
	//	�ǻ��з����Ʊ������ֱ��ӡ\n��\t������ʹ�ÿ����ַ���ʾ������
	//	�磬ASCII��1��Ctrl + A������ʾΪ ^ A��ע�⣬A��ASCIIֵ��Ctrl + A��ֵ����
	//	64�������Ǵ�ӡ�ַ�Ҳ�����ƵĹ�ϵ����ÿ���������з���ӡ�µ�һ��֮
	//	�⣬ÿ�д�ӡ10��ֵ����ע�⣺��ͬ�Ĳ���ϵͳ������ַ����ܲ�ͬ����
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


	//3.��дһ������������ EOF ֮ǰ����������Ϊ�ַ�����ȡ���ó���
	//Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ����������Сд��ĸ��ֵ������
	//	�ġ�����ʹ��ctype.h���к��ʵķ��ຯ�������㡣
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
	//4.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ
	//����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ����
	//	����Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô�ࣨ�����Ƚ�������㣬
	//	����ʹ��ctype.hϵ���е�ispunct()��������
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