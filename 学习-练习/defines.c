#include<stdio.h>
#include<limits.h>//整形限制
#include<float.h>//浮点数限制

int main() {

	//这个系统的所有限制
	printf("最大整形：%d\n", INT_MAX);
	printf("最小的长长整形：%lld\n", LLONG_MIN);
	printf("一字节=%dbits", CHAR_BIT);
	printf("最大双精度值：%e\n", DBL_MAX);
	printf("最小浮点数值：%e\n", FLT_MIN);
	return 0;
}