#include<stdio.h>
#define RATE1 10
#define RATE2 0.05
#define RATE3 0.08
#define DUNBAR 150

int main() {

	//1..Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相
	/*当于原始投资的10% ）。Deirdre以 5 % 的复合利息投资了 100 美元（也就是
		说，利息是当前余额的 5 % ，包含之前的利息）。编写一个程序，计算需要
		405
		多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。*/
	//float Daphne_money = 100, Deirdre_money = 100;
	//int year;
	//for (year = 0; Deirdre_money <= Daphne_money; year++) {
	//	Daphne_money += RATE1;
	//	Deirdre_money *= (1 + RATE2);

	//}
	//printf("%d年后Deirdre超过Daphne\nDaphne的投资额：%f,Deirdre的投资额：%f\n", year, Daphne_money, Deirdre_money);
	
	//2.Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的
	//账户。在每年的最后一天， Chuckie取出10万美元。编写一个程序，计算多
	//	少年后Chuckie会取完账户的钱？
	//float money = 1000000;
	//int year;
	//for (year = 0; money >= 0; year++) {
	//	money = money * (1 + RATE3) - 100000;

	//}
	//printf("%d年后Chuckie会取走账户所有的钱\n",year);
	
	//3.
	int friend = 5, i,j;
	for (i = 1,j=0; friend <= DUNBAR; i++,j++) {
		printf("%d周后就达到最大朋友数%d\n", j, friend);
		friend = (friend - i) * 2;
		
	}
	
	return 0;
}