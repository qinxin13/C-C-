#include<stdio.h>

//处理二维数组的函数

#define ROWS 3
#define COLS 4
void sum_rows(int arr[][COLS], int rows) {
	
	int r;
	int c;
	int tot;
	for (r = 0; r <rows; r++) {

		tot = 0;
		for (c = 0; c < COLS; c++) {

			tot += arr[r][c];


		}
		printf("row %d: sum=%d\n", r, tot);
	}

}
void sum_cols(int arr[][COLS], int rows) {

	int r;
	int c;
	int tot;
	for (c = 0; c < COLS; c++) {

		tot = 0;
		for (r = 0; r < rows; r++) {

			tot += arr[r][c];
			

		}
		printf("col %d: sum=%d\n", c, tot);
	}

}
int sum2d(int arr[][COLS], int rows) {

	int r;
	int c;
	int sum=0;
	for (r = 0; r < rows; r++) 
	for (c = 0; c < COLS; c++) 
	sum += arr[r][c];
	return sum;
}
int main() {

	int arr[ROWS][COLS] = {

		{2,3,4,5},
		{3,4,5,6},
		{4,5,6,7}
	};
	sum_rows(arr, ROWS);
	sum_cols(arr, ROWS);
	printf("Sum of all elements=%d\n", sum2d(arr, ROWS));
	return 0;

}