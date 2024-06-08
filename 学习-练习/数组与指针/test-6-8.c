#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12  //一年的月份数
#define YEARS 5    //念书


int main() {

	//1.修改程序清单10.7的rain.c程序，用指针进行计算（仍然要声明并初始
	/*化数组）。*/
	//用2010-2014年的降水量数据初始化数组
	const float rain[YEARS][MONTHS] = {
		{4.3,4.3,3.0,2.0,1.2,0.3,0.2,0.4,2.4,3.5,6.6,2.3 },
		{3.3,4.3,3.0,2.0,1.2,1.3,0.2,0.4,2.4,3.2,6.6,2.3 },
		{4.3,4.3,3.3,2.0,1.2,0.3,0.2,0.4,2.4,3.5,6.6,2.3 },
		{4.3,4.3,3.4,2.3,1.2,0.3,0.2,0.4,7.4,3.5,6.6,2.3 },
		{4.3,4.3,3.0,2.0,1.6,0.3,0.2,0.4,1.4,3.5,6.6,2.3 },
	};
	int year, month;
	float subtot, total;
	printf("  YEAR    RAINFALL    (inches)\n");
	for (year = 0, total = 0; year < YEARS; year++) {

		//每一年，各月的降水量总和
		for (month = 0, subtot = 0; month < MONTHS; month++){

			subtot += *(*(rain + year) + month);

		}
		printf("%5d %11.1f\n", 2010 + year, subtot);
		total += subtot;//5年的总降水量

	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan Feb Apr May Jun Jul Aug Sep Oct ");
	printf(" Nov Dec\n");
	for (month - 0; month < MONTHS; month++) {
		//每个月，5年的总降水量
		for (year = 0,subtot = 0; year < YEARS;year++) {
			subtot += *(*(rain + year) + month);

		}
		printf("%4.1f ", subtot / YEARS);
	}
	printf("\n");
	return 0;

}