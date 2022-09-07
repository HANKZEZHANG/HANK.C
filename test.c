#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book a={"一本好书",10000000};
	struct Book* b = &a;
	printf("书名叫%s\n", b->name);
	printf("价格是%d元\n", b->price);
	a.price = 5201314;
	printf("修改后的价格是%d元\n", b->price);
	return 0;
}