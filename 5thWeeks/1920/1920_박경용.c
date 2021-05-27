#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;

#define MAX_ELEMENTS 100000

element a[MAX_ELEMENTS];

int compare(const void *a, const void *b);
int binary_search(element a[], element temp, int n);

int main(void)
{
	int n = 0, m = 0;
	element x = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", a + i);

	qsort(a, n, sizeof(element), compare);

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		printf("%d ", binary_search(a, x, n));
	}

	return 0;
}

element compare(const void *a, const void *b)
{
	element num_a = *(element *)a;
	element num_b = *(element *)b;

	if (num_a < num_b)
		return -1;

	if (num_a > num_b)
		return 1;

	return 0;
}

int binary_search(element a[], element x, int n)
{
	int start_ix = 0;
	int end_ix = n;

	int pivot = 0;
	int pivot_ix = 0;

	do
	{
		pivot_ix = (start_ix + end_ix) / 2;
		pivot = a[pivot_ix];

		if (x == pivot) return 1;
		else if (x > pivot)
		{
			start_ix = pivot_ix + 1;
		}
		else if (x < pivot)
		{
			end_ix = pivot_ix - 1;
		}
	} while (start_ix < end_ix);

	if (x == a[start_ix]) return 1;

	return 0;
}