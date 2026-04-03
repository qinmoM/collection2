#include<stdio.h>

//define定义标识符
#define SIZE 10
//define定义宏
#define Add(x,y) x*y//如果要精准表达x*y，写成（(x)*(y))
#define Add2(x, y) ((x)*(y))

int main()
{
	int z = 10;
	int x = SIZE;
	printf("%d %d %d\n", z, x, SIZE);
	int c = Add(30 + 4, 4 + 5);
	printf("Before tuning:%d After tuning:%d", c, Add2(30 + 4, 4 + 5));
	return 0;
}