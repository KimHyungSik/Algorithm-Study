#include <iostream>

void oper_x(int n);

int results[10000001] = { 0, };

int main(void)
{
	unsigned int n;

	results[2] = 1;
	results[3] = 1;

	std::cin >> n;

	for (int i = 4; i < n + 1; i++)
	{
		oper_x(i);
	}

	std::cout << results[n];

	return 0;
}

void oper_x(int n)
{
	if (results[n]) return;

	if (n > 3) oper_x(n - 1);

	int min_count = 0;

	if (n % 2 == 0)
	{
		if (min_count == 0)
			min_count = results[n / 2];
	}
	if (n % 3 == 0)
	{
		if (min_count == 0)
			min_count = results[n / 3];
		else if (min_count > results[n / 3])
			min_count = results[n / 3];
	}

	{
		if (min_count == 0)
			min_count = results[n - 1];
		else if (min_count > results[n - 1])
			min_count = results[n - 1];
	}
	results[n] = ++min_count;

	return;
}