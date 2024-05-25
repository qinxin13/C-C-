#include<stdio.h>
#include "hotel.h"
//假设要管理 4 家酒店的客房服务，每家酒店的房
//价不同，但是每家酒店所有房间的房价相同。对于预订住宿多天的客户，第
//2天的房费是第1天的95 % ，第3天是第2天的95 % ，以此类推（暂不考虑这种
//策略的经济效益）。设计一个程序让用户指定酒店和入住天数，然后计算并
//显示总费用。同时，程序要实现一份菜单，允许用户反复输入数据，除非用
//户选择退出。

//房间费率程序
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