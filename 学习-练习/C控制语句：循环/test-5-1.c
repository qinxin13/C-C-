#include<stdio.h>

int main() {

	//1.��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ
	/*������Ϊ2��ǰ8���ݡ�ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����
		ʾ����Ԫ�ص�ֵ*/
	/*int arr[8];
	int i;
	arr[0] = 1;
	for (i = 1; i < 8; i++) {

		arr[i] = 2 * arr[i - 1];
	}
	i = 0;
	do {

		printf("%d ", arr[i]);
		i++;
	} while (i < 8);*/

	//2
	/*double arr1[8], arr2[8];
	int i, j;
	printf("��Ϊ��һ����������8��ֵ��");
	for (i = 0; i < 8; i++) {

		scanf_s("%lf", &arr1[i]);
		if (i > 0) {
			arr2[i] = arr1[i] + arr2[i - 1];
		}
		else {
			arr2[i] = arr1[i];
		}
	}
	for (i = 0; i < 8; i++) {
		printf("%.2f\n", arr2[i]);
	}*/
	
	//3
	char arr[255];
	int i=-1;
	printf("������һ���ַ���");
	do {
		i++;
		scanf_s("%c", &arr[i]);

	} while (arr[i] != '\n');
	for (; i >= 0; i--) {
		printf("%c ", arr[i]);
	}

		

	
	return 0;
}