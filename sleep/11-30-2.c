#include<stdio.h>
#include<windows.h>

int main()
{
	int arr[3][4] = { { 0, 1, 2, 3 }, { 4, 5, 6, 7 }, { 8, 9, 10, 11 } };
	printf("%d\n", *(arr + 1)[0]);
	printf("%d\n", arr[0][1]);
	printf("123\n");
	Sleep(3000);
	printf("456\n");
	return 0;
}