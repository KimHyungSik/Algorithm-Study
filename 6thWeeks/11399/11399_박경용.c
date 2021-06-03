#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(void const *const a, void const *const b);

int main(void)
{
	int n = 0;
	int sum = 0;

	scanf("%d", &n);

	int *queue = (int *)malloc(sizeof(int) * n);
	memset(queue, 0, sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", queue + i);
	
	qsort((void *)queue, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
		sum += queue[i] * (n - i);
	
	printf("%d\n", sum);

	free((void *)queue);

	return 0;
}

int compare(void const *const a, void const *const b)
{
	int num_a = *(int *)a;
	int num_b = *(int *)b;

	if (num_a > num_b) return 1;
	if (num_a < num_b) return -1;
	return 0;
}