//백준 2559번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K;
    int* arr;
    int* SumArr; // 누적 합 배열
    int max;

    scanf("%d %d", &N, &K);

    arr = (int*)calloc(N, sizeof(int));
    SumArr = (int*)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (i == 0)
            SumArr[i] = arr[i];
        else
            SumArr[i] = SumArr[i - 1] + arr[i]; // 누적 합 계산
    }
    max = SumArr[K - 1]; // 처음 K 길이의 구간 합으로 초기화

    for (int i = K; i < N; i++) {
        int intervalSum = SumArr[i] - SumArr[i - K]; // K 길이의 구간 합 계산

        if (intervalSum > max)      // max의 값보다 크면 max 값을 현재의 값으로 갱신
            max = intervalSum;
    }

    printf("%d", max);

    free(arr);
    free(SumArr);

    return 0;
}
