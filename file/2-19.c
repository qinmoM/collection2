#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//FILE* pf = fopen("text.txt", "w");
	//if (NULL == pf)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fprintf(pf, "%s %d\n", "zhangsan", 19);
	//fclose(pf);
	//pf = NULL;
	FILE* pf = fopen("text.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	char arr[9] = { 0 };
	int a = 0;
	fscanf(pf, "%s %d", arr, &a);
	printf("%s½ñÄê%dËê\n", arr, a);
	fclose(pf);
	pf = NULL;
	return 0;
}