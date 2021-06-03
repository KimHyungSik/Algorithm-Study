#pragma warning(disable:4996)
#include <stdio.h>

int coin[6] = { 500,100,50,10,5,1 };

int main(void)
{
	int money = 0, count = 0;
	int index = 0;

	scanf("%d", &money);
	money = 1000 - money;

	while (money > 0)
	{
		count += money / coin[index];
		money %= coin[index++];

		/*
		if (money >= coin[index])
		{
			money -= coin[index];
			++count;
		}
		else if (index < 6)
		{
			++index;
		}
		*/
	}

	printf("%d", count);

	return 0;
}