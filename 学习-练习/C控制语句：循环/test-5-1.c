#include<stdio.h>

int main() {

	//1.编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元
	/*素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显
		示数组元素的值*/
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
	printf("请为第一个数组输入8个值：");
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
	printf("请输入一行字符：");
	do {
		i++;
		scanf_s("%c", &arr[i]);

	} while (arr[i] != '\n');
	for (; i >= 0; i--) {
		printf("%c ", arr[i]);
	}

		

	
	return 0;
}