#include<stdio.h>

void function(int a)
{
	if (a > 1)
	{
		function(a - 1);
	}
	printf("%d\t", a);
}

int main()
{
	int a = 7;
	int arr[] = { 1, 2, 3, 4 };
	function(a);
	int* b = &arr;
	printf("\n%d\t%d\t%p\t%p\t%p\t%p\n",*(b),*(b + 1),&arr[0], &arr[1], &arr[2], &arr[3]);
	return 0;
}