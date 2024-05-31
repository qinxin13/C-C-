#include<stdio.h>

int Fibonacci(int n) {

	int a = 1, b = 1, sum;
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	for (int i = 3; i <= n; i++) {

		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}

int main() {

	//1.1.编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契
	//数
	int  n;
	for (n = 0; n < 20; n++) {
		printf("%d\t", Fibonacci(n));
	}
	return 0;
}