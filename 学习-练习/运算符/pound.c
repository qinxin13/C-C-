#include<stdio.h>

//����һ���������ĺ���
void pound(int n)//����ԭ������
{

	while (n-- > 0) 

		printf("*");
		printf("\n");
	
}


int main() {

	int times = 5;
	char ch = '@';
	float f = 6.0f;
	pound(times);//int���͵Ĳ���
	pound(ch);//��pound((int)ch)��ͬ
	pound(f);
	return 0;
}