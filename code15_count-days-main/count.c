//根据年月日计算天数
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	int x = a, y = b, z = c;
	//尝试
	switch (b)
	{
	case 12:c = c + 30;
	case 11:c = c + 31;
	case 10:c = c + 30;
	case 9:c = c + 31;
	case 8:c = c + 31;
	case 7:c = c + 30;
	case 6:c = c + 31;
	case 5:c = c + 30;
	case 4:c = c + 31;
	case 3:c = c + 28;
	case 2:c = c + 31; 
	case 1:; break;
	}
	if (3 <= b)
		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
			c++;
	printf("The count is %d\n", c);
	//示例
	while (y > 1)
	{
		switch (y)
		{
		case 12:
		case 10:
		case 7:
		case 5:
		case 3:
			z += 30;
			break;
		case 11:
		case 9:
		case 8:
		case 6:
		case 4:
			z += 31;
			break;
		case 2:
			z += 28;
			if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
			{
				z++;
			}
			break;
		default:
			printf("fales");
			break;
		}
		y--;
	}
	printf("The count is %d\n", z);
	return 0;
}
