#include<stdio.h>
#include<stdlib.h>

struct data
{
	int a;
	int* arr;
};

int main()
{
	struct data arr = { 0, NULL };
	struct data* arr1 = &arr;
	arr1->arr = (int*)malloc(40);
	if (NULL == arr1->arr)
	{
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		*(arr1->arr + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr1->arr + i));
	}
	free(arr1->arr);
	arr1->arr = NULL;
	getchar();
	return 0;
}