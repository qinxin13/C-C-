#include<stdio.h>

void display(char cr, int lines, int width) {

	int row, col;
	for (row = 1; row <= lines; row++) {
		for (col = 1; col <= width; col++) {
			putchar(cr);
		}
		putchar('\n');
	}

}
int main() {

	//��ָ�������д�ӡ�ַ�
	int ch;//����ӡ���ַ�
	int rows, cols;//����������
	printf("�����ַ�������������\n");
	while ((ch = getchar()) != '\n') {

		if (scanf_s("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n');
		continue;
		printf("����һ���ַ�����������\n");
		printf("����һ�������˳�\n");

	}
	printf("GoodBye\n");
	return 0;

}