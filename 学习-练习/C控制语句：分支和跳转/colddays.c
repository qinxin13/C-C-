#include<stdio.h>

//�ҳ�0�����µ�����ռ�������İٷֱ�
int main() {

	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("������ÿ��ƽ������¶ȣ�\n");
	printf("ʹ�����϶Ƚ��б�ʾ��������qʱ�˳�.\n");
	while (scanf_s("%f", &temperature) == 1) {

		all_days++;
		if (temperature < FREEZING) {
			cold_days++;
		}
	}
		if (all_days != 0)
			printf(" % ddays total : % .1f % %were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
		if (all_days == 0)
			printf("û����������\n");
		return 0;

}