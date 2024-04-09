//백준 1758번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
	{
		return -1;
	}
	if (num1 < num2)
	{
		return 1;
	}
	else
		return 0;
}

int main(void)
{
	int N;
	long long sum = 0;
	scanf("%d", &N);
	long long* arr = (long long*)malloc(sizeof(long long) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &arr[i]);
	}
	qsort(arr, N, sizeof(long long), compare);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] - i < 0)
		{
			break;
		}
		else
		{
			sum = sum + arr[i] - i;
		}
	}
	printf("%lld\n", sum);
	return 0;
}
