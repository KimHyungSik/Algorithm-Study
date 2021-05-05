#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000001] = { 0 };

int main() {
	int n, cnt, tmp = 0, a = 0, b = 1;
	scanf("%d", &n);
	arr[1] = 0;
	
	for (int i = 2; i <= n; i++) {
		// 3 or 2 % != 0
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) {
			a = arr[i];  b = arr[i / 2] + 1 ; //drop or -1
			tmp = a < b ? a : b;
			arr[i] = tmp;
		}
		if (i % 3 == 0) {
			a = arr[i];  b = arr[i / 3] + 1; //drop or -1
			tmp = a < b ? a : b;
			arr[i] = tmp;
		}	
	}
	printf("%d", arr[n]);
} 