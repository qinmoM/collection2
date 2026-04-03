#include<stdio.h>

extern int Add(int x, int y);

typedef unsigned int uint;//类型重命名:命名为uint

static void Func()
{
    static int count = 0;
    count++;
    printf("The count is %d\n", count);
}

int main()
{
	unsigned int m = 1;//==>
	uint n = 1;
	printf("%u\n%u\n", m, n);
	static int q = 3;
//将变量q放到静态区，q的储存位置不变,使q的生命周期与程序相同
	printf("%p\n", &q);
	int a = 5;
	int b = 4;
	int z = Add(a, b);
    printf("%d", z);
	register int i = 3;
    printf("%d\n", i);
    while (i < 6)
    {
        Func();
        i++;
    }
	return 0;
}