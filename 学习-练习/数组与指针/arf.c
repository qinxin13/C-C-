#include<stdio.h>

//�������������
#define SIZE 5
//��ʾ��������
void show_array(const double arr[], int n) {

	int i;
	for (i = 0; i < n; i++) {

		printf("%8.3f ", arr[i]);

	}
	putchar('\n');
}
//ÿ������Ԫ�س�һ���ض�ֵ
void mult_array(double arr[], int n, double mult) {

	int i;
	for (i = 0; i < n; i++) {

		arr[i] *= mult;


	}


}
int main() {

	double arr[SIZE] = { 2.3,45,6.7,4.55,7 };
	printf("The original dip array\n");
	show_array(arr, SIZE);
	mult_array(arr, SIZE, 5.6);
	printf("The dip array after calling mult_array():\n");
	show_array(arr, SIZE);
	return 0;

}