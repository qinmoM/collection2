#include<stdio.h>

int main()
{
	int arr[] = { 23,76,22,66,110 };
	int a = 0, i = 0, m = 0,b = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (; i < n; i++)//选出最大数
	{
		if (a < arr[i])
		{
			a = arr[i];
			m = i;
		}
	}
	printf("%d\n", a);

	if (arr[0] < a)//把最大数与首项交换
	{
		b = arr[0];
		arr[0] = a;
		arr[m] = b;
	}
	for (i = 0; i < n; i++)//输出数组
	{
		printf("%6d", arr[i]);
	}

	return 0;
}