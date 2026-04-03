#include<stdio.h>
int main()
{
	int a = 0;
	if (!a)
		printf("%d\n", a);
	else
		printf("00\n");
	int b = 283;
	printf("%d\n", sizeof(short));
	int c = 'g';
	printf("%d\n", c);
	int d = a > 2 ? a : 2;
	printf("%d\n", d);
	int f = (a = a + 3, a + 4);
	printf("%d", f);
	return 0;
}