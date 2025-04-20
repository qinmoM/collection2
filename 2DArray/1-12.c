#include<stdio.h>

void print1(int (*arr)[4], int m, int n, int e);

int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6 };
	print1(arr, 12, 3, 4);
	getchar();
	return 0;
}

void print1(int (*arr)[4], int m, int n, int e)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < e; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}