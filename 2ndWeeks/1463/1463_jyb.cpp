#include <stdio.h>
#pragma warning (disable:4996)

int arr[10000];

int min(int a, int b)
{
	return a > b ? b : a;
}

int main(void)
{
	int num;
	scanf("%d", &num);

	arr[1] = 0;

	for (int i = 2; i <= num; i++)
	{
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0)
		{
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	printf("%d", arr[num]);
}