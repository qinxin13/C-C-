#include<stdio.h>

//ָ���8�ֻ�������
int main() {

	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = arr;//�ѵ�һ����ַ����ָ��1
	ptr2 = &arr[2];//�ѵ�������ַ����2
	//������ָ�� �Լ����ָ��ĵ�ַ
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);

	//ָ��ӷ�
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4=%p,*(ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));
	printf("ptr3=%p,*ptr3=%d\n", ptr3, *ptr3);
	ptr1++;//����ָ��
	printf("\nvalues after ptr1++:\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	--ptr2;//�ݼ�ָ��
	printf("\nvalues after --ptr2:\n");
	printf("ptr2=%p,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	--ptr1;//�ָ���ʼֵ
	++ptr2;//�ָ���ʼֵ
	printf("\nPointers reset to original values:\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	printf("ptr2=%p,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	//һ��ָ���ȥ��һ��ָ��
	printf("\nsubstracting an int from a pointer:\n");
	printf("ptr3=%p,ptr3-2=%p\n", ptr3, ptr3 - 2);
	
	return 0;


}