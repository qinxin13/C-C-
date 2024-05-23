#include<stdio.h>
//µ›πÈ—› æ
void up_and_down(int x) {

	printf("Level %d: n location, %p\n", x, &x);//#1

	if (x < 4) {

		up_and_down(x + 1);
		
	}
	printf("Level %d: n location %p\n", x, &x);//#2

}
int main() {

	up_and_down(1);
	return 0;

}