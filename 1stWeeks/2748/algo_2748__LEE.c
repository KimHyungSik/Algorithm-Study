#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	long long i = 0, j = 1, tmp = 0, e = 0, k = 0;

	scanf("%d", &e);

	for (k; k <= e; k++) {
		if (k == e) {
			printf("%lld ", i);
			tmp = i + j;
			i = j;
			j = tmp;
			break;
		}
		tmp = i + j;
		i = j;
		j = tmp;
	}

	return 0;
}