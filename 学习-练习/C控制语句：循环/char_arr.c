#include<stdio.h>

//1.��д���򣬴���һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ��Ȼ���ӡ�������������
int main() {

	/*char arr[26];
	int i ;
	for(i=0;i<26;i++){
		arr[i] = 'a' + i;
		printf("arr[%d]=%c\n", i, arr[i]);
	}*/

	//2.��Ҫ���ӡͼ��
	//int i, j;
	//for (i = 0; i < 5; i++) {

	//	for (j = 0; j < i + 1;j++) {

	//		printf("$");
	//	}
	//	printf("\n");
	//}

	//3.ʹ��Ƕ��ѭ������Ҫ���ӡ��ĸ
	int i, j;
	char arr[6] = "ABCDEF";
	for (i = 0; i < 6; i++) {

		for (j = 0; j  < i + 1; j++) {
			arr[j] = 'F' - j;
			printf("%c", arr[j]);
		}
		printf("\n");

	}
	return 0;

}