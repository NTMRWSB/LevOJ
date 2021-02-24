#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct infomation
{
	int no;
	char country[16];
	int people;
	char continents[16];
}Info;

int main()
{
	int n, i, j;
	while (scanf("%d", &n) != EOF)
	{
		Info* info = (Info*)malloc(n * sizeof(Info));
		for (i = 0; i < n; i++)
			scanf("%d %s %d %s", &info[i].no, info[i].country, &info[i].people, info[i].continents);
		for (i = 0; i < n; i++)
			for (j = 0; j < n - i - 1; j++)
				if (strcmp(info[j + 1].country, "China") == 0)
					continue;
				else if (strcmp(info[j].country, info[j + 1].country) > 0 || strcmp(info[j].country, "China") == 0)
				{
					Info temp;
					temp = info[j];
					info[j] = info[j + 1];
					info[j + 1] = temp;
				}
		for (i = 0; i < n; i++)
			printf("%d %s %d %s\n", info[i].no, info[i].country, info[i].people, info[i].continents);
	}
	return 0;
}