#include<stdio.h>

void test()
{
	int b = 4;
	if (2 == b)
		return;//不加大括号会与后面第一条语句相连
	printf("%p\n%d\n", &b,b);//后面不受影响
}

int main()
{
	int a = 3;
	static int b = 5;
	printf("%p\n", &b);
	if (a < b)
		if (3 == a)
			printf("dd\n");//else和第二个if相连
		else
			printf("ff\n");
	if (a < b)
	{
		if (3 == a)
			printf("dd\n");//else和第一个if相连
	}
	else
		printf("ff\n");
	test();
	printf("%d\n", b);
	return 0;
}

