#include<stdio.h>

//����ָ��ʵ�ֽ���
void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
int main() {

	int a = 10, b = 19;
	printf("ԭʼ��a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("���ڣ�a=%d,b=%d\n", a, b);
	return 0;
}