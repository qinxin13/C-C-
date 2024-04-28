#include<stdio.h>

//1.编写程序，创建一个包含26个元素的数组，并在其中存储26个小写字母。然后打印数组的所有内容
int main() {

	/*char arr[26];
	int i ;
	for(i=0;i<26;i++){
		arr[i] = 'a' + i;
		printf("arr[%d]=%c\n", i, arr[i]);
	}*/

	//2.按要求打印图案
	//int i, j;
	//for (i = 0; i < 5; i++) {

	//	for (j = 0; j < i + 1;j++) {

	//		printf("$");
	//	}
	//	printf("\n");
	//}

	//3.使用嵌套循环，按要求打印字母
	int i, j;
	char arr[6] = "ABCDEF";
	for (i = 0; i < 6; i++) {

		for (j = 0; j  < i + 1; j++) {
			arr[j] = 'F' - j;
			printf("%c", arr[j]);
		}
		printf("\n");

	}
	return 0;

}