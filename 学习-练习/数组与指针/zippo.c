//#include<stdio.h>
//
////ͨ��ָ���ȡzippo����Ϣ
//int main() {
//
//	int arr[4][2] = { {2,4},{6,8},{3,4},{7,9} };
//	//����һ��ָ���ά�����׵�ַ��ָ��
//	int(*p)[2];
//	p = arr;
//	printf("    p=%p,    p+1=%p\n", p, p + 1);
//	printf("p[0]=%p, p[0]+1=%p\n", p[0], p[0] + 1);
//	printf("    *p=%p,   *p+1=%p\n", *p, *p + 1);
//	printf("p[0][0]=%d\n", p[0][0]);
//	printf("    *p[0]=%d\n", *p[0]);
//	printf("    **p=%d\n", **p);
//	printf("         p[2][1]=%d\n", p[2][1]);
//	printf("*(*(p+2)+1)=%d\n", *(*(p + 2) + 1));
//	return 0;
//
//}