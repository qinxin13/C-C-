#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<string.h>

int main() {

	//1.��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������
	int n;
	int i, j;
	printf("������һ����������\n");
	while((scanf_s("%d",&n))==1&&n>0){
		for (i = 2; i <= n; i++) {

			for (j = 2; j < i; j++) {

				if (i % j == 0) {

					break;

				}
			}
			if (i == j) {

				printf("�����У�%d\t", j);

			}
		}
		printf("\n�ٴ����룺");
	}
	return 0;
}