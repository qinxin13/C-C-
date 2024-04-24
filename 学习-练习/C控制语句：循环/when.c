#include<stdio.h>

//何时退出循环
int main(void) {

	int n = 5;
	while (n < 7) {
		printf("n=%d\n", n);
		n++;
		printf("Now n=%d\n", n);
	}
	printf("循环结束\n");
	return 0;
}