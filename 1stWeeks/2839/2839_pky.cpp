#include <iostream>

int main(void)
{
	int n = 0, count = 0;

	count = 0;
	std::cin >> n;

	if (n == 4 || n == 7)
	{
		n = count = -1;
	}

	count += (n / 15) * 3;
	n %= 15;

	while (n > 0)
	{
		switch (n)
		{
		case 1:
			count += 1;
			n = 0;
			break;
		case 2:
		case 4:
			count += 2;
			n = 0;
			break;
		case 7:
			count += 3;
			n = 0;
			break;
		case 3:
		case 6:
		case 9:
		case 12:
			n -= 3;
			count++;
			break;
		default:
			n -= 5;
			count++;
			break;
		}
	}

	std::cout << count << std::endl;
}
