#include<stdio.h>
//����ѭ���͵ݹ�ʵ�ֽ׳�

//1.ʹ��ѭ��ʵ��
long fact(int n) {
	int i;
	long sum=1;
	for (i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}
//2.ʹ�õݹ�ʵ��
long rfact(int n) {
	long sum;
	if (n> 0) {
		sum = n * rfact(n - 1);
	}
	else {
		sum = 1;
	}
	return sum;

}
int main() {

	int n;
	printf("���������Ϊ��ʵ�����Ľ׳ˣ�\n");
	printf("������һ��1-12�����֣���q�˳���\n");
	while (scanf_s("%d", &n) == 1) {

		if (n < 0) {

			printf("�����Ǹ���\n");

		}
		else if (n > 12) {

			printf("���������ֵС��13\n");
		}
		else {
			printf("ѭ����%d�Ľ׳���%ld\n", n, fact(n));
			printf("�ݹ飺%d�Ľ׳���%ld\n", n, rfact(n));
		}
	}
	printf("bye!");
	return 0;
}