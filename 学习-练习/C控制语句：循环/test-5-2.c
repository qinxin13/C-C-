#include<stdio.h>
#define RATE1 10
#define RATE2 0.05
#define RATE3 0.08
#define DUNBAR 150

int main() {

	//1..Daphne��10%�ĵ���ϢͶ����100��Ԫ��Ҳ����˵��ÿ��Ͷ�ʻ�����
	/*����ԭʼͶ�ʵ�10% ����Deirdre�� 5 % �ĸ�����ϢͶ���� 100 ��Ԫ��Ҳ����
		˵����Ϣ�ǵ�ǰ���� 5 % ������֮ǰ����Ϣ������дһ�����򣬼�����Ҫ
		405
		������Deirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ��ʱ���˵�Ͷ�ʶ*/
	//float Daphne_money = 100, Deirdre_money = 100;
	//int year;
	//for (year = 0; Deirdre_money <= Daphne_money; year++) {
	//	Daphne_money += RATE1;
	//	Deirdre_money *= (1 + RATE2);

	//}
	//printf("%d���Deirdre����Daphne\nDaphne��Ͷ�ʶ%f,Deirdre��Ͷ�ʶ%f\n", year, Daphne_money, Deirdre_money);
	
	//2.Chuckie LuckyӮ����100����Ԫ��˰�󣩣����ѽ������������8%��
	//�˻�����ÿ������һ�죬 Chuckieȡ��10����Ԫ����дһ�����򣬼����
	//	�����Chuckie��ȡ���˻���Ǯ��
	//float money = 1000000;
	//int year;
	//for (year = 0; money >= 0; year++) {
	//	money = money * (1 + RATE3) - 100000;

	//}
	//printf("%d���Chuckie��ȡ���˻����е�Ǯ\n",year);
	
	//3.
	int friend = 5, i,j;
	for (i = 1,j=0; friend <= DUNBAR; i++,j++) {
		printf("%d�ܺ�ʹﵽ���������%d\n", j, friend);
		friend = (friend - i) * 2;
		
	}
	
	return 0;
}