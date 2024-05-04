#include<stdio.h>
#include<stdbool.h>
//使用嵌套if语句显示一个数的约数
int main() {

	unsigned long num;//待测试的数
	unsigned long n;//可能的约数
	bool isPrime;//用以标记是否是素数

	printf("请输入一个待测试的整数：");
	printf("当按下q时退出!\n");

	while (scanf_s("%lu", &num) == 1) {

		for (n = 2, isPrime = 1; (n * n) <= num; n++) {

			if (num % n == 0) {
				if ((n * n) != num) {
					printf("%lu能被%lu和%lu整除\n", num, n, num / n);
				}
				else {
					printf("%lu能被%lu整除\n", num, n);
				}
				isPrime = 0;//num不是素数；
			}
			
		}
		if (isPrime) {
			printf("%lu是素数\n", num);
		}
		printf("请输入下一个待测试数：");
		printf("按q退出\n");
	}
	printf("bye!\n");
	return 0;

}