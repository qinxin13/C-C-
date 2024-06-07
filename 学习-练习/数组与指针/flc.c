#include<stdio.h>

//有趣的的常量
#define COLS 4
int sum2d(const int arr[][COLS], int rows) {

	int r;
	int c;
	int tot = 0;
	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			tot += arr[r][c];
	return tot;

}
int sum(const int arr[], int n) {
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		total += arr[i];

	}
	return total;
}
int main() {

	int total1, total2, total3;
	int* p1;
	int(*p2)[COLS];
	p1 = (int[2]){ 10,20 };
	p2 = (int[2][COLS]){ {1,2,3,5},{3,4,5,6} };
	total1 = sum(p1, 2);
	total2 = sum2d(p2, 2);
	total3 = sum((int[]) { 4, 4, 4, 5, 5, 5 }, 6);
	printf("total1=%d\n", total1);
	printf("total2=%d\n", total2);
	printf("total3=%d\n", total3);
	return 0;
}