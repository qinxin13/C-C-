//#include<stdio.h>
//
////使用条件运算符
//#define COVERAGE 350
//int main() {
//
//	int sq_feet;
//	int cans;
//	printf("请输入要粉刷多少面积：\n");
//	while (scanf_s("%d", &sq_feet) == 1) {
//
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//		printf("需要%d%s油漆\n", cans, cans == 1 ? "can" : "cans");
//		printf("请输入下一个要刷的面积(当按q退出):\n");
//	}
//	return 0;
//
//}