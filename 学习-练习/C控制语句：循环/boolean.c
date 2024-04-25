#include<stdio.h>
#include<stdbool.h>//能用bool替换_Bool

//使用_Bool类型的变量
int main() {

	long num;
	long sum = 0L;
	_Bool input_is_good;
	printf("Please enter an integer to be summed");

	printf("（q to quit)：");
	input_is_good = (scanf_s("%ld", &num) == 1);
	while (input_is_good) {

		sum = sum + num;
		printf("Please enter next integer (q to quit)：");
		input_is_good = (scanf_s("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld\n", sum);

	return 0;

}
