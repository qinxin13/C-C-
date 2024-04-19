//#include<stdio.h>
//
////使用C99新增的%zd进行转换说明，如果编译器不支持，则改为%u或者%lu
//int main() {
//
//	int n = 0;
//	size_t intsize;//通过typedef把size_t变为了unsigned int或者unsigned long的别名
//	intsize = sizeof(int);
//	printf("n = %d,n has %zd bytes,all n has %zd bytes\n", sizeof n, intsize);
//	printf("n = %d,n has %u bytes,all n has %lu bytes\n", sizeof n, intsize);
//
//	return 0;
//
//}
