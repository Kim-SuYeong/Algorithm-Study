#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000001];

void prime_number(int num1, int num2)
{
	for (int i = 2; i <= num2; i++)
	{
		arr[i] = 1;
	}
	for (int i = 2; i <= num2; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i+i; j <= num2; j += i)
		{
			arr[j] = 0; //소수가 아닌 수는 0
		}
	}
	for (int i = num1; i <= num2; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", i);
		}
	}
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	prime_number(a, b);
	return 0;
}
