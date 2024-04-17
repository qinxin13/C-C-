#include<stdio.h>
#include<string.h>

int main() {

	//1.编写一个程序，提示用户输入名和姓，然后以”名，姓”的格式打印出来
	//char firstname[40];
	//char lastname[40];

	//printf("请输入您的姓：\n");//2015后，使用scanf_s代替是scanf，并且需要在读入字符串类型的变量后要描述数组大小。
	//scanf_s("%s", firstname,40);

	//printf("请输入您的名：\n");
	//scanf_s("%s", lastname,40);

	//printf("姓：%s,名：%s\n", firstname, lastname);

	//2.编写一个程序，提示用户输入名和姓，并执行下面的操作
	//打印名和姓，包括双引号
	//在宽度为20的字段右端打印名和姓，包括双引号
	//在宽度为20的字段左端打印名和姓，包括双引号
	//在比姓名宽度宽3的字段种打印名和姓
	/*char f_name[40];
	char l_name[40];

	printf("Enter your firstname ：\n");
	scanf_s("%s", f_name, 40);
	printf("Enter your  lastname：\n");
	scanf_s("%s", l_name, 40);
	int flength = strlen(f_name);
	int llength = strlen(l_name);
	int length = flength + llength;


	printf("\"firstname:%s\",\"lastname:%s\"\n", f_name, l_name);
	printf("\"firstname:%20s\",\"lastname:%20s\"\n", f_name, l_name);
	printf("\"firstname:%-20s\",\"lastname:%-20s\"\n", f_name, l_name);
	printf("\"firstname:%*s\",\"lastname:%s\"\n", length+3,f_name, l_name);//*使字段变长

	return 0;*/

	//3.输入一个浮点数，首先以小数点计数法打印，然后以指数计数法打印
	/*float value = 0.0;

	printf("输入一个浮点数：");

	scanf_s("%f", &value);

	printf("%.1f,%.1e\n", value, value);

	printf("%+.3f,%.3e\n", value, value);*/

	//4.编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度
	/*和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。注意，
	这里1字节等于8位。使用float类型，并用 / 作为除号。该程序要以下面的
	格式打印 3 个变量的值（下载速度、文件大小和下载时间），显示小数点
    236后面两位数字*/
	float speed;
	float size;
	float time;

	printf("Please enter speed and size:");

	scanf_s("%f %f", &speed, &size);
	time = size / (speed / 8);
	printf("下载速度是：%.2f(Mb/s),内存大小是：%.2f(Mb)\n", speed, size);
	printf("下载时间是：%.2f秒\n", time);

	return 0;
	

}