#include <stdio.h>
int main()
{
	int a = 0;
	int* p = &a;
	int** m = &p;
	printf("%p\n%p\n%zu\n%zd\n",p,m,sizeof(m),sizeof(a));
	char b = '0';
	char* pb = &b;
	char** mb = &pb;
	printf("%p\n%p\n%zu\n%zd", pb, mb, sizeof(mb), sizeof(b));
	return 0;
}