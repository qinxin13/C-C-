//#include<stdio.h>
//
////利用for循环处理数组：读取数据，打印总分、平均分、差点（handicap）
//#define SIZE 10  //限定输入的个数
//#define PAR 72  //限定标准分
//
//int main() {
//
//	int index,i, score[SIZE];
//	int sum = 0;
//	float averge;
//	printf("请输入%d个高尔夫分数:\n", SIZE);
//	for (index = 0; index < SIZE; index++) {
//
//		scanf_s("%d", &score[index]);
//		printf("%5d ", score[index]);
//		sum = sum + score[index];
//		averge = (float)sum / SIZE;
//	}
//
//		printf("sum=%d,averge=%.2f\n", sum, averge);
//		printf("差点=%.0f\n", averge - PAR);
//	return 0;
//
//}