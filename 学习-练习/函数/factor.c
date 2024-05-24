#include<stdio.h>
//利用循环和递归实现阶乘

//1.使用循环实现
long fact(int n) {
	int i;
	long sum=1;
	for (i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}
//2.使用递归实现
long rfact(int n) {
	long sum;
	if (n> 0) {
		sum = n * rfact(n - 1);
	}
	else {
		sum = 1;
	}
	return sum;

}
int main() {

	int n;
	printf("这个程序是为了实现数的阶乘：\n");
	printf("请输入一个1-12的数字（按q退出）\n");
	while (scanf_s("%d", &n) == 1) {

		if (n < 0) {

			printf("不能是负数\n");

		}
		else if (n > 12) {

			printf("请让输入的值小于13\n");
		}
		else {
			printf("循环：%d的阶乘是%ld\n", n, fact(n));
			printf("递归：%d的阶乘是%ld\n", n, rfact(n));
		}
	}
	printf("bye!");
	return 0;
}