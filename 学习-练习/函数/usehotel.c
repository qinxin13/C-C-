#include<stdio.h>
#include "hotel.h"
//����Ҫ���� 4 �ҾƵ�Ŀͷ�����ÿ�ҾƵ�ķ�
//�۲�ͬ������ÿ�ҾƵ����з���ķ�����ͬ������Ԥ��ס�޶���Ŀͻ�����
//2��ķ����ǵ�1���95 % ����3���ǵ�2���95 % ���Դ����ƣ��ݲ���������
//���Եľ���Ч�棩�����һ���������û�ָ���Ƶ����ס������Ȼ����㲢
//��ʾ�ܷ��á�ͬʱ������Ҫʵ��һ�ݲ˵��������û������������ݣ�������
//��ѡ���˳���

//������ʳ���
int main() {

	int nights;
	double hotel_rate;
	int code;
	while ((code = menu()) != QUIT) {

		switch (code) {

		case 1:
			hotel_rate = HOTEL1;
			break;
		case 2:
			hotel_rate = HOTEL2;
			break;
		case 3:
			hotel_rate = HOTEL3;
			break;
		case 4:
			hotel_rate = HOTEL4;
			break;
		default:
			hotel_rate = 0.0;
			printf("Oops!\n");
			break;

		}
		nights = getnights();
		showprice(hotel_rate, nights);

	}
	printf("Thank you and goodbye!\n");
	return 0;

}