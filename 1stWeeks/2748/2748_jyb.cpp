#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long 
		i = 0			/**/, 
		j = 1			/**/, 
		tmp = 0		/*HOLDER*/, 
		e = 0			/*INPUT*/, 
		k = 0			/*CHECKS IF FOR LOOP IS EQUAL TO INPUT*/;

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