#include<stdio.h>
//ʹ������ָ���������֮��
#define SIZE 10
int sump(int* start, int* end) {

	int total = 0;
	while (start < end) {

		total += *start;
		start++;

	}
	return total;

}
int main() {

	int arrs[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	long answer;
	answer = sump(arrs, arrs + SIZE);

	printf("������ǣ�%ld\n", answer);
	return 0;

}