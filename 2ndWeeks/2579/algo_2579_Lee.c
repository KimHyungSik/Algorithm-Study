#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int m(int x,int y) {
	return x > y ? x : y;
}

int main() {
	int n;
	int sa[310] = {0};
	int arr[310] = {0};

	scanf("%d", &n);

	for (int i = 1; i <= n; i++){	
		scanf("%d", &sa[i]);
	}

	for (int i = 1; i <= 3 ; i++){
		if (i != 3) {
			arr[i] = arr[i - 1] + sa[i];
		}
		else{
			arr[i] = m(sa[i] + sa[i-1], sa[i] + sa[i-2]);
		}
	}

	for (int i = 4; i <= n; i++){
		arr[i] = m(sa[i] + sa[i - 1] + arr[i - 3], sa[i] + arr[i - 2]);
	}

	printf("%d", arr[n]);

	return 0;
}