#include<stdio.h>

//找出0℃以下的天数占总天数的百分比
int main() {

	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("请输入每天平均最低温度：\n");
	printf("使用摄氏度进行表示，当按下q时退出.\n");
	while (scanf_s("%f", &temperature) == 1) {

		all_days++;
		if (temperature < FREEZING) {
			cold_days++;
		}
	}
		if (all_days != 0)
			printf(" % ddays total : % .1f % %were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
		if (all_days == 0)
			printf("没有输入数据\n");
		return 0;

}