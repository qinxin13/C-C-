#include<stdio.h>

//float end(float x, float y) {
//	float result;
//	result = (x - y) / (x * y);
//	return result;
//}
float formulas1(int x);
float formulas2(int y);
int main() {

	//1.��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ�������û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��
	//float a, b, result;
	//printf("������������������");
	//while (scanf_s("%f%f", &a, &b) == 2) {
	//	result = (a - b) / (a * b);
	//	printf("%f\n", result);
	//	printf("������������������");
	//	//scanf_s("%f%f", &a, &b);
	//
	//}

	//2.�޸���ϰ1��ʹ��һ���������ؼ���Ľ��
	/*float a, b, result;
	printf("������������������");
	while (scanf_s("%f%f", &a, &b) == 2) {
		result = end(a, b);
		printf("%f\n", result);
		printf("������������������");
	}*/

	//3.��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8������
	/*int group[8], i;
	printf("������8��������");
	for (i = 0; i < 8; i++) {

		scanf_s("%d", &group[i]);
	}
	for (i = 7; i >= 0; i--) {

		printf("%d ", group[i]);
	}
	printf("\n");*/

	//4.
	int times;
	printf("������ִ�ж��ٴΣ�");
	while (scanf_s("%d", &times) == 1 && times > 0) {
		printf("%f %f\n", formulas1(times), formulas2(times));
		printf("������ִ�ж��ٴΣ�");
	}

	return 0;

}
float formulas1(int x) {

	int i;
	float sum = 0.0;
	for (i =1; i <= x; i++) {
		sum += 1.0 / i;
	}
	return sum;

}
float formulas2(int y) {

	int i, j = -1;
	float sum = 0.0;
	for (i =1; i <= y; i++) {
		j *= -1;
		sum += (1.0 / i) * j;
	}
	return sum;

}