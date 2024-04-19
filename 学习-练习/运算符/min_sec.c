#include<stdio.h>
//程序主要功能是把秒数转换为分和秒
#define SEC_PER_MIN 60;//1分钟60秒

int main() {

	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");

	printf("Enter the number of seconds (<=0 to quit):\n");

	scanf_s("%d", &sec);
	while (sec > 0) {

		min = sec / SEC_PER_MIN;//截断的分钟数
		left = sec % SEC_PER_MIN;//截断的秒数

		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);
		printf("Enter next value(<=0 to quit):\n");
		scanf_s("%d", &sec);

	}
	printf("Done!\n");
	return 0;

}