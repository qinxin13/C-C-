#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ȫ�ֱ���
int a = 10;
int main() {
	/*printf("hello world");
	return 0;*/

	/*printf("%d/\n",sizeof(int));
	printf("%d/\n",sizeof(float));
	printf("%d/\n",sizeof(long));
	printf("%d/\n",sizeof(long long));
	printf("%d/\n",sizeof(char));
	printf("%d/\n",sizeof(double));
	printf("%d/\n",sizeof(short));*/

	//���� ���ֲ�������
	//short age = 20;//����
	//int height = 180;//���
	//float weight = 78.4;//����

	int num1 = 10;
	int num2 = 30;
	scanf("%d %d", &num1, &num2);
	//���
	int sum = num1 + num2;
	//���
	printf("%d\n", sum);
	return 0;
}