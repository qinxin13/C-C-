#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char get_first(FILE* in) {

	char ch;
	while ((ch = getc(in)) <= ' ') {

		continue;

	}
	return ch;

}

int main() {

	//	//5..修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序
//		/*最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一
//		次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜
//		测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如
//		果用户没有欺骗程序，那么程序很快就会猜到正确的答案。*/

	//char response;
	//int u = 100, l = 1;
	//int guess = 50;
	//while ((response = getchar()) != 'y')//获取响应
	//{

	//	while (getchar() != '\n') {

	//		continue;//跳过剩余的行

	//	}
	//	if (response == 'u') {
	//		u = guess;
	//		printf("is it %d?\n", guess = (guess + l)/2);
	//	}
	//	else if (response == 'l') {

	//		l = guess;
	//		printf("is it %d?\n", guess = (guess + u) / 2);
	//	}
	//	else {

	//		printf("I understand only u,l or y.\n");

	//	}

	//}
	//printf("good");

	//6.修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空
	/*白字符，并在一个简单的程序中测试。*/
	FILE* in;
	char ch;
	errno_t err;
	err = fopen_s(&in, "123.txt", "r");
	ch = get_first(in);
	printf("%c\b", ch);
	fclose(in);


	return 0;

}