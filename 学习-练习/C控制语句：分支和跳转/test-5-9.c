#include<stdio.h>
#include<stdlib.h>

int main() {

	//1.ʹ��if else����дһ�������ȡ���룬����#ֹͣ���ø�̾���滻��
	/*�ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻*/
	//int count = 0;
	//char ch;
	//printf("�����룺");
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
	//printf("��������%d���滻\n", count);


	//2.ʹ��switch��д��ϰ1
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
	printf("��������%d���滻\n", count);*/

	//3.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
	/*ע��ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award����
	��������������*/

	/*int count = 0, flag = 0;
	char ch;
	printf("�����룺\n");
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
	printf("eiһ��������%d��\n", count);*/

	return 0;

}