#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int A[10001] = { 0, };
int B[10001] = { 0, };


int main(void) {

	int n, m;
	int i;
	int tmp = 0;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);

	}
	for (i = 1; i <= n; i++)
	{
		B[i] = B[i - 1] + A[i - 1];
	}

	for (i = 0; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (m == B[j] - B[i])
			{
				tmp++;
			}
		}
	}
	printf("%d", tmp);
	return 0;
}
