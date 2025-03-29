#include<stdio.h>
#include<stdbool.h>

struct
{
	bool q;
	bool w;
	bool e;
	bool r;
}Bool;

int main()
{
	// c++中引入了bool变量,只占一个比特位,只有true和false,但是占位会占用1个字节
	bool a = false;
	bool b = true;
	bool c = 0;
	bool d = 1;
	bool array[8] = { 1, 0, 0, 1, 0, 1, 0, 1 };
	printf("%d\n%d\n", a, b);
	printf("%p\n%p\n", array + 0, array + 1);
	printf("%zu", sizeof(Bool));
	return 0;
}