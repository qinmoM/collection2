#include<stdio.h>
#include<stdlib.h>

int int_cmp(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

int main()
{
	int arr[] = { 7, 8 ,9 };
	printf("The elements are:");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nUsing qsort:");
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), int_cmp);// 最后为函数指针
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	getchar();
	return 0;
}