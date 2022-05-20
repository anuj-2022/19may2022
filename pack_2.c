#include<stdio.h>
#pragma pack(1)//1->9,2->10,3->12,0->12,-1->12
struct data
{
	int a;
	char b;
	int c;
};
void main()
{
struct data d;

printf("size without padding pack2 %ld\n",sizeof(d));

}

