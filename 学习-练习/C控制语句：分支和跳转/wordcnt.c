#include<stdio.h>
#include<ctype.h>//Ϊisspace()�ṩԭ��
#include<stdbool.h>//Ϊbool,true,false�ṩ����

//ͳ���ַ�����������������
#define STOP '|'
int main() {

	char c;//�����ַ�
	char prev;//������һ���ַ�
	long n_chars = 0L;//�ַ���
	int n_lines = 0;//����
	int n_words = 0;//������
	int p_lines = 0;//������������

	bool inword = false;//���c�ڵ����У�inword����true
	printf("������Ҫ����ĵ��ʣ�\n");
	prev = '\n';//����ʶ����������
	while ((c = getchar()) != STOP) {

		n_chars++;//ͳ���ַ�
		if (c == '\n') 
		n_lines++;//ͳ����
		if (!isspace(c) && !inword) {
			inword = true;//��ʼһ���µĵ���
			n_words++;//ͳ�Ƶ���
		}
		if (isspace(c) && inword)
		inword = false;//�򵽵��ʵ�ĩβ	
		prev = c;//�����ַ���ֵ

	}
	if (prev != '\n')
	p_lines = 1;
	printf("�ַ�=%ld,����=%d,����=%d", n_chars, n_words, n_lines);

	printf("�����ܹ��У�%d\n", p_lines);
	return 0;

}