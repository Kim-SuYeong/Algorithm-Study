//백준 4673번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d_n(int num)
{
	int sum = num;
	while (num > 0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main(void)
{
	int arr[10001];
	int sum;
	for (int i = 1; i < 10001; i++)
	{
		sum = d_n(i);
		if (sum < 10001)
		{
			arr[sum] = 1;
		}
	}
	for (int i = 1; i<10001; i++)
	{
        if(arr[i]!=1)
        {
            printf("%d\n", i);
        }
	}
	return 0;
}
