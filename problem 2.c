// 백준 1850 - 최대공약수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int Euclidean(long long int a, long long int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return Euclidean(b, a % b);
	}
}

int main(void)
{
	long long int m, n;
	scanf("%lld %lld", &m, &n);
	long long int num = Euclidean(m, n);
	for (int i = 0; i < num; i++)
	{
		printf("1");
	}
	return 0;
}
