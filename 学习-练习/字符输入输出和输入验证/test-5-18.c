#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

	//�����һЩ����Ҫ��������EOF��ֹ�������Ĳ���ϵͳ���ѻ������
	//	��ʹ���ض�����ʹ��һЩ�����Ĳ�������ֹ���룬�����& �ַ�ʱֹͣ��
	//1.���һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����
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