#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book a={"һ������",10000000};
	struct Book* b = &a;
	printf("������%s\n", b->name);
	printf("�۸���%dԪ\n", b->price);
	a.price = 5201314;
	printf("�޸ĺ�ļ۸���%dԪ\n", b->price);
	return 0;
}