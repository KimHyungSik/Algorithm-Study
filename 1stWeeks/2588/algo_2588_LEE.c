#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	// 123 * 123 123 *3 123 *23
	c = a * ((b % 100) % 10);
	d = (a * (b % 100)) - c;
	e = (a * b) - c - d;
	printf("%d\n", c);
	printf("%d\n", d / 10);
	printf("%d\n", e / 100);
	printf("%d", a*b);
	return 0;
}