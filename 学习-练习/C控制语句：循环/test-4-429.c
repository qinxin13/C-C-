#include<stdio.h>
#include<string.h>
int main() {

	//1
	//char letters='A';
	//int i, j;
	//for (i = 0; i < 6; i++) {

	//	for (j = 0; j < i + 1; j++, letters++) {
	//		//arr[j] = 'A' + j;
	//		printf("%c", letters);
	//	}
	//	printf("\n");
	//}

	//2.��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ��
	//int i, j,limit;
	//char letters;
	//printf("�������д��ĸ��");
	//scanf_s("%c", &letters);
	//limit = letters - 'A' + 1;
	//for (i = 0; i < limit; i++) {

	//	for (j = 0; j < limit - i - 1; j++) {

	//		printf(" ");//��ӡ�ո�
	//	}
	//	for (j = 0; j <= i; j++) {
	//		printf("%c", 'A' + j);//�����ӡ��ĸ
	//	}
	//	for (j = i - 1; j >= 0; j--) {
	//		printf("%c", 'A' + j);//�����ӡ��ĸ
	//	}
	//	printf("\n");

	//}

	//3.��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û�������������ޡ�ʹ��һ��forѭ����
	/*int num, square, cube;
	int upper, lower;
	printf("��������������ޣ�");
	scanf_s("%d %d", &upper, &lower);
	printf("num     square     cube\n");

	for (num = lower; num <= upper; num++) {

		square = num * num;
		cube = num * num * num;
		printf("%2d%10d%10d\n", num, square, cube);

	}*/

	//4.��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ�����
	//�ʡ���ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±�
	char arr[20];
	int i, n;
	
	printf("������һ���ַ���");
	scanf_s("%s", &arr);
	n = strlen(arr);
	printf("%d", n);
	for (i = n-1; i >= 0; i--) {
		printf("%c", arr[i ]);
	}
	printf("\n");
	return 0;

}