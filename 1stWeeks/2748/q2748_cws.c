#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	
	long long a;
	long long b;
	long long c;
	int n;

	scanf("%d", &n);


		a = 0;
		b = 1;
		c = 0;
		for (int i = 0; i < n - 1; i++)
		{
			c = a + b;
			a = b;
			b = c;

		}
		printf("%lld", c);

}