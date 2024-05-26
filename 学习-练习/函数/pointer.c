#include<stdio.h>

//利用指针实现交换
void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
int main() {

	int a = 10, b = 19;
	printf("原始：a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("现在：a=%d,b=%d\n", a, b);
	return 0;
}