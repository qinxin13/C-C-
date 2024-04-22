#include<stdio.h>
#define FORMAT "%s! C is cool\n"
#define TEN 103

int main() {

	/*int x = (int)3.8 + 3.3;
	int y = (2 + 3) * 10.5;
	printf("x=%d\n", x);
	printf("y=%d\n", y);

	int i = 1;
	float n;
	while (i++ < 30) {

		n = 1.0 / i;
		
	}
	printf("%f\n", n);*/

	//2
	//int num = 10;
	//printf("FORMAR,FORMAT\n");
	//printf("%d\n", ++num);//11
	//printf("%d\n", num++);//11
	//printf("%d\n", num--);//12
	////printf("%d\n", --num);
	//printf("%d\n", num);//11

	//3
	/*char c1, c2;

	int diff;

	float num;


	c1 = 'S';

	c2 = 'O';

	diff = c1 - c2;
	num = diff;

	printf("%c%c%c:%d  %3.2f\n", c1, c2, c1, diff,  num);*/

	//4
	int n = 96;
	while (n++ < TEN)
		printf("%c", n);
	printf("\n");


	return 0;

}