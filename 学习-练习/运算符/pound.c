#include<stdio.h>

//定义一个带参数的函数
void pound(int n)//函数原型声明
{

	while (n-- > 0) 

		printf("*");
		printf("\n");
	
}


int main() {

	int times = 5;
	char ch = '@';
	float f = 6.0f;
	pound(times);//int类型的参数
	pound(ch);//和pound((int)ch)相同
	pound(f);
	return 0;
}