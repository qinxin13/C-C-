#include<stdio.h>
#include<string.h>

int main() {

	//1.��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ����
	//char firstname[40];
	//char lastname[40];

	//printf("�����������գ�\n");//2015��ʹ��scanf_s������scanf��������Ҫ�ڶ����ַ������͵ı�����Ҫ���������С��
	//scanf_s("%s", firstname,40);

	//printf("��������������\n");
	//scanf_s("%s", lastname,40);

	//printf("�գ�%s,����%s\n", firstname, lastname);

	//2.��дһ��������ʾ�û����������գ���ִ������Ĳ���
	//��ӡ�����գ�����˫����
	//�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫����
	//�ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫����
	//�ڱ�������ȿ�3���ֶ��ִ�ӡ������
	/*char f_name[40];
	char l_name[40];

	printf("Enter your firstname ��\n");
	scanf_s("%s", f_name, 40);
	printf("Enter your  lastname��\n");
	scanf_s("%s", l_name, 40);
	int flength = strlen(f_name);
	int llength = strlen(l_name);
	int length = flength + llength;


	printf("\"firstname:%s\",\"lastname:%s\"\n", f_name, l_name);
	printf("\"firstname:%20s\",\"lastname:%20s\"\n", f_name, l_name);
	printf("\"firstname:%-20s\",\"lastname:%-20s\"\n", f_name, l_name);
	printf("\"firstname:%*s\",\"lastname:%s\"\n", length+3,f_name, l_name);//*ʹ�ֶα䳤

	return 0;*/

	//3.����һ����������������С�����������ӡ��Ȼ����ָ����������ӡ
	/*float value = 0.0;

	printf("����һ����������");

	scanf_s("%f", &value);

	printf("%.1f,%.1e\n", value, value);

	printf("%+.3f,%.3e\n", value, value);*/

	//4.��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶ�
	/*�������ֽڣ�MB��Ϊ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣ע�⣬
	����1�ֽڵ���8λ��ʹ��float���ͣ����� / ��Ϊ���š��ó���Ҫ�������
	��ʽ��ӡ 3 ��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС����
    236������λ����*/
	float speed;
	float size;
	float time;

	printf("Please enter speed and size:");

	scanf_s("%f %f", &speed, &size);
	time = size / (speed / 8);
	printf("�����ٶ��ǣ�%.2f(Mb/s),�ڴ��С�ǣ�%.2f(Mb)\n", speed, size);
	printf("����ʱ���ǣ�%.2f��\n", time);

	return 0;
	

}