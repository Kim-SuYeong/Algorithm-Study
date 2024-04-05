// 백준 1065번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void han_su(int num)
{
	if (num < 100)
	{
		printf("%d", num);
	}
	else if(num >= 100 && num <= 1000)
	{
		int cnt = 99;
		int a, b, c;
		for (int i = 100; i <= num; i++)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;
			if ((c - b) == (b - a))
			{
				cnt++;
			}
		}
		printf("%d", cnt);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	han_su(n);
}
