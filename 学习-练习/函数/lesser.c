#include<stdio.h>

//找出两个证书中较小的一个
int imin(int x, int y) {

	int  m;
	if (x <y) {
		m= x;
	}
	else {
		m = y;
	}
	return m;
}


int main() {

	int evil1, evil2;
	printf("Enter a pair of integers (q to quit):\n");
	while (scanf_s("%d %d", &evil1, &evil2) == 2) {

		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye!\n");
	return 0;

}