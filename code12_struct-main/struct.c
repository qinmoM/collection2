#include<stdio.h>

//定义一个结构体类型
struct People
{
	int a;
	char n[20];
	long long t;
	char s[12];
};

//结构体可以嵌套
typedef struct student
{
	struct People u;
}std;//typedef重命名

int main()
{
	static struct People r = { 18,"张三",12345678910,"man"};//如何打印成员
	printf("%s %s %d %lld\n", r.n, r.s, r.a, r.t);
	struct People* m = &r;//一般用指针传参
	printf("%lld\n%lld\n%p\n", (*m).t,m->t,&r.t);//结构体指针后面接->
	std n = { r };
	printf("%s %s %d %lld\n", n.u.n, n.u.s, n.u.a, n.u.t);

	return 0;
}