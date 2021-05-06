#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100001] = { 0 };
int re[100001] = { 0 };
int a[100001] = { 0 };

int main() {
	int n, m, i, j;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++){
		scanf("%d", &arr[i]);
		re[i] = re[i - 1] + arr[i];
	}

	for (int k = 1; k <= m; k++){
		scanf("%d %d", &i, &j);
		a[k] = re[j] - re[i- 1];
	}

	for (int i = 1; i <= m; i++){
		printf("%d\n", a[i]);
	}

	return 0;
}