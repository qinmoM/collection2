#include<stdio.h>

enum day
{
	mon = 1,
	tues,
	wed = 9
};

int main()
{
	enum day today = tues;
	printf("%d", mon);
	printf("%d", tues);
	printf("%d", wed);
	printf("%d", today);
	getchar();
}