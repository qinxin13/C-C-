#include<stdio.h>

//处理数组的内容
#define SIZE 5
//显示数组内容
void show_array(const double arr[], int n) {

	int i;
	for (i = 0; i < n; i++) {

		printf("%8.3f ", arr[i]);

	}
	putchar('\n');
}
//每个数组元素乘一个特定值
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