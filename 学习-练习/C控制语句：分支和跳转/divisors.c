#include<stdio.h>
#include<stdbool.h>
//ʹ��Ƕ��if�����ʾһ������Լ��
int main() {

	unsigned long num;//�����Ե���
	unsigned long n;//���ܵ�Լ��
	bool isPrime;//���Ա���Ƿ�������

	printf("������һ�������Ե�������");
	printf("������qʱ�˳�!\n");

	while (scanf_s("%lu", &num) == 1) {

		for (n = 2, isPrime = 1; (n * n) <= num; n++) {

			if (num % n == 0) {
				if ((n * n) != num) {
					printf("%lu�ܱ�%lu��%lu����\n", num, n, num / n);
				}
				else {
					printf("%lu�ܱ�%lu����\n", num, n);
				}
				isPrime = 0;//num����������
			}
			
		}
		if (isPrime) {
			printf("%lu������\n", num);
		}
		printf("��������һ������������");
		printf("��q�˳�\n");
	}
	printf("bye!\n");
	return 0;

}