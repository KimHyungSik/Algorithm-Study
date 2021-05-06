#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int n = 0, m = 0;
int numbers[100001] = { 0, };
int numbers_added[100001] = { 0, };

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", numbers + i);
		numbers_added[i] = numbers_added[i - 1] + numbers[i];
	}

	for (int i = 0; i < m; i++)
	{
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);

		printf("%d\n", numbers_added[b] - numbers_added[a - 1]);
	}

	return 0;
}