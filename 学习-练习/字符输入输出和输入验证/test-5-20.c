#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char get_first(FILE* in) {

	char ch;
	while ((ch = getc(in)) <= ' ') {

		continue;

	}
	return ch;

}

int main() {

	//	//5..�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬����
//		/*�����50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ
//		�β²��ֵӦ��50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β�
//		���ֵӦ��50��75����ֵ���ȵȡ�ʹ�ö��ֲ��ң�binary search�����ԣ���
//		���û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�*/

	//char response;
	//int u = 100, l = 1;
	//int guess = 50;
	//while ((response = getchar()) != 'y')//��ȡ��Ӧ
	//{

	//	while (getchar() != '\n') {

	//		continue;//����ʣ�����

	//	}
	//	if (response == 'u') {
	//		u = guess;
	//		printf("is it %d?\n", guess = (guess + l)/2);
	//	}
	//	else if (response == 'l') {

	//		l = guess;
	//		printf("is it %d?\n", guess = (guess + u) / 2);
	//	}
	//	else {

	//		printf("I understand only u,l or y.\n");

	//	}

	//}
	//printf("good");

	//6.�޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�1���ǿ�
	/*���ַ�������һ���򵥵ĳ����в��ԡ�*/
	FILE* in;
	char ch;
	errno_t err;
	err = fopen_s(&in, "123.txt", "r");
	ch = get_first(in);
	printf("%c\b", ch);
	fclose(in);


	return 0;

}