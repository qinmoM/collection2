#include<stdio.h>
int main()
{
	int a = 100;
	while (a <= 999)
	{
		int z = a % 10, x = a / 10 % 10, c = a / 100;
		if (a == z * z * z + x * x * x + c * c * c)
			printf("%d\n", a);
		a++;
	}
	return 0;
}