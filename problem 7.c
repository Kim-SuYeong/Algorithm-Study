//백준 8958번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char result[80];
	int N; //a number of test cases
	scanf("%d", &N);
	for (int i = 0; i < N; i++) // O(N)의 시간복잡도
	{
		scanf("%s", result);
		int sum = 0; //총점
		int continuous_sum = 1; //연속으로 O이 나온 횟수
		for (int i = 0; result[i] != NULL; i++) // O(strlen(result)) = O(80) = O(1)의 시간복잡도(상수는 1로 취급)
		{
			if (result[i] == 'O')
			{
				sum += continuous_sum;
				continuous_sum++;
			}
			if (result[i] == 'X')
			{
				continuous_sum = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0; //최종적으로 O(N * 1) = O(N)의 시간복잡도를 가짐
}
