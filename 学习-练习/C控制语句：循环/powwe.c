#include<stdio.h>

//����forѭ�����ⲿ����ʵ��n����
double pow(double num, int ex) {
	double power = 1;
	int i;
	for (i = 1; i <= ex; i++) {
		power *= num;
	}
	return power;

}
int main() {

	int p;
	double n, powx;
	printf("����������ֵ:\n");
	while (scanf_s("%lf%d", &n, &p) == 2) {
		powx = pow(n, p);
		printf("%.3g to power %d is %.5g\n", n, p, powx);
	}
	return 0;

}