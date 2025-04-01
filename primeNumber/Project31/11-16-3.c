#include<stdio.h>

int main()
{
	int i = 0, n = 0, m = 0, u = 0;
	for (n = 2; n < 100; n++)
	{
		u = 0;
		for (i = 2; i < n; i++)
		{
			m = n % i;
			if (0 == m)
			{
				u = u + 1;
			}
		}
		if (0 == u)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}