#include<stdio.h>
#include<stdlib.h>
//菜单程序

char get_first(void) {

	int ch;
	ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;

}
char get_choice() {
	
	int ch;
	printf("enter the letter of your choice:\n");
	printf("a.  advice              b.  bell\n");
	printf("c.  count              q.  quit\n");
	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q') {

		printf("Please respond with a,b,c,or q\n");
		ch = get_first();

	}
	return ch;

}

int get_int() {

	int input;
	char ch;
	while (scanf_s("%d", &input) != 1) {

		while ((ch = getchar()) != '\n')
			putchar(ch);//处理错误输入
		printf("  is not an integer.\nPlease enter an  ");
		printf("integer value, such as 25, -178, or 3  ");

	}
	return input;

}
void count() {

	int n, i;
	printf("Count how far? enter an integer:\n");
	n = get_int();
	for (int i = 1; i <= n; i++) {

		printf("%d\n", i);
		while (getchar() != '\n');
		continue;

	}

}


int main() {

	int choice;
	void count();
	while ((choice = get_choice()) != 'q') {

		switch (choice) {

		case 'a':
			printf("Buy low,sell high\b");
			break;
		case 'b':
			putchar('\a');
			break;
		case 'c':
			count();
			break;
		default:
			printf("Program error!\n");
			break;

		}

	}
	printf("Bye!");
	printf("\n");
	return 0;
}