#include<stdio.h>

int main()
{
	char arr1[100] = "12309876514";
	int i = 0, arr2[10];
	for (i = 0; i < 10; i++)
	{
		arr2[i] = 0;
	}
	for (i = 0; arr1[i]; i++)
	{
		arr2[arr1[i] - '0']++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d:%-3d", i, arr2[i]);
	}
	getchar();
	return 0;
}