#include<stdio.h>
#define PERIOD '.'
//ʹ���߼�����������ַ������ж����ַ�������˫���ź͵�����
int main() {

	char ch;
	int count = 0;
	while ((ch = getchar()) != PERIOD) {

		if (ch != '"' && ch != '\'')
		{
			count++;
		}

	}
	printf("һ����%d���������ַ�\n", count);
	return 0;
}