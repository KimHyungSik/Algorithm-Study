#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

unsigned long long buffer[2][90] = { 0 };
char number[2][16] = { 0 };
char message[32] = { 0 };

void fibonacci_print(int num)
{
	memset(number[1], 0, 16);
	memset(number[0], 0, 16);
	memset(message, 0, 32);

	sprintf(number[0], "%ld", buffer[0][num]);

	if (buffer[1][num])
	{
		sprintf(number[1], "%ld", buffer[1][num]);
		strcpy(message, number[1]);
		strcat(message, number[0]);
	}
	else
	{
		strcpy(message, number[0]);
	}
	cout << message << endl;
}

void fibonacci(int num)
{
	if (num <= 2)
	{
		return;
	}
	else if (buffer[1][num] || buffer[0][num])
	{
		return;
	}

	if (!(buffer[0][num - 2] && buffer[0][num - 1]))
	{
		fibonacci(num - 1);
	}

	buffer[1][num] = buffer[1][num - 2] + buffer[1][num - 1];
	buffer[0][num] = buffer[0][num - 2] + buffer[0][num - 1];

	if (buffer[0][num] < 1000000000UL)
	{
		return;
	}
	else
	{
		buffer[1][num] += buffer[0][num] / 1000000000UL;
		buffer[0][num] %= 1000000000UL;
		return;
	}
}

int main(void)
{
	int num;

	buffer[0][1] = 1;
	buffer[0][2] = 1;
	
	cin >> num;
	fibonacci(num);
	fibonacci_print(num);
	
	return 0;
}