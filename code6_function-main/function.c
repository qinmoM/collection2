#include<stdio.h>

int a(int c, int d)//int表示返回一个int类型的数据；不返回值的话用void;还有float,double,char,long。
{
	return c*d;
}

int main()
{
	int z = a(3,6);
	printf("%d",z);
	return 0;
}