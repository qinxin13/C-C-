#include<stdio.h>

//ʹ��break����ѭ��
int main() {

	float length, width;
	printf("��������͵ĳ���\n");
	while (scanf_s("%f", &length) == 1) {

		printf("length=%.2f:\n", length);
		printf("�����ȣ�\n");
		if (scanf_s("%f", &width) != 1)
		break;
		printf("width=%.2f:\n", width);
		printf("Area=%.2f\n", length * width);
		printf("��������εĳ��ȣ�\n");
	}
	printf("bye!\n");
	return 0;

}