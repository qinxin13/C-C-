#include<stdio.h>
#include<ctype.h>//为isspace()提供原型
#include<stdbool.h>//为bool,true,false提供定义

//统计字符数，单词数，行数
#define STOP '|'
int main() {

	char c;//读入字符
	char prev;//读入上一个字符
	long n_chars = 0L;//字符数
	int n_lines = 0;//行数
	int n_words = 0;//单词数
	int p_lines = 0;//不完整的行数

	bool inword = false;//如果c在单词中，inword等于true
	printf("请输入要计算的单词：\n");
	prev = '\n';//用于识别完整的行
	while ((c = getchar()) != STOP) {

		n_chars++;//统计字符
		if (c == '\n') 
		n_lines++;//统计行
		if (!isspace(c) && !inword) {
			inword = true;//开始一个新的单词
			n_words++;//统计单词
		}
		if (isspace(c) && inword)
		inword = false;//打到单词的末尾	
		prev = c;//保存字符的值

	}
	if (prev != '\n')
	p_lines = 1;
	printf("字符=%ld,单词=%d,行数=%d", n_chars, n_words, n_lines);

	printf("行数总共有：%d\n", p_lines);
	return 0;

}