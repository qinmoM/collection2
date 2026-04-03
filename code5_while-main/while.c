#include<stdio.h>
int main()
{
	int a=0,i=1;
	printf("请输入不大于60的数\n");
	while (a < 60)
	{
		printf("第%d次\n", i);
		i=i+1;
		scanf("%d", &a);
	}
	printf("完成");
	return 0;
}