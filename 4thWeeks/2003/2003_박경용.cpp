#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr_num[10000] = { 0, };
long arr_sum[10001] = { 0, };

int n = 0;
long m = 0;
long sum = 0;
int cnt = 0;

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", arr_num + i);

	arr_sum[0] = 0;

	for (int i = 1; i <= n; i++)
		arr_sum[i] = arr_sum[i - 1] + arr_num[i - 1];

	for (int i = 0; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (m == arr_sum[j] - arr_sum[i])
				cnt++;

	printf("%d", cnt);

	return 0;
}