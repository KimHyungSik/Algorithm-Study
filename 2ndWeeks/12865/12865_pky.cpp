#include <iostream>

using namespace std;

#define MAX_ITEM_COUNT 100
#define MAX_BAG_WEIGHT 100000

enum { ITEM_WEIGHT, ITEM_VALUE };

int items[MAX_ITEM_COUNT][2] = { 0, };
int values[MAX_ITEM_COUNT + 1][MAX_BAG_WEIGHT + 1] = { 0, };
int max_value = 0;

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int main(void)
{
	int n = 0, k = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> items[i][ITEM_WEIGHT] >> items[i][ITEM_VALUE];

	values[0][items[0][ITEM_WEIGHT]] = items[0][ITEM_VALUE];

	for (int i = 1; i < n; i++)
	{
		for (int w = 1; w <= k; w++)
		{
			if (w < items[i][ITEM_WEIGHT])
				values[i][w] = values[i - 1][w];
			else
				values[i][w] = max(values[i - 1][w], values[i - 1][w - items[i][ITEM_WEIGHT]] + items[i][ITEM_VALUE]);
		}
	}

	for (int w = 1; w <= k; w++)
		max_value = max(max_value, values[n - 1][w]);

	cout << max_value;
	return 0;
}