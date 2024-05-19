#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int N; //case 개수
	int gap, gnum = 0; 
	char word[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int count = 0; //0이면 그룹단어 0이 아니면 그룹단어가 아님
		scanf("%s", word);
		for (int j = 0; j < strlen(word); j++)
		{
			for (int k = j + 1; k < strlen(word); k++)
			{
				if (word[j] == word[k]) //같은 단어가 연속적으로 있는 경우
				{
					gap = k - j;
					if (gap >= 2)
					{
						if (word[k] != word[k - 1]) //직전 알파벳과 비교하여 다르면 그룹단어가 아님
						{
							count++;
						}
					}
				}
			}
		}
		if (count == 0)
		{
			gnum++;
		}
	}
	printf("%d", gnum);
	return 0;
}
