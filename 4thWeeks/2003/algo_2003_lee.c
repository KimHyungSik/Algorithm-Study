#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int n, m;
	int arr[10001] = { 0 };
	int tmp = 0, r = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	
	for (int i = 0; i < n; i++) {;
		tmp += arr[i];
		for (int j = i + 1; j <= n; j++){
			if (tmp == m) {
				tmp = 0;
				r++;
				break;
			}
			if (tmp > m) {								
				tmp = 0;
				break;
			}
			tmp += arr[j];
			if (j == n ){
				tmp = 0;
				break;
			}
		}
		
	}
	printf("%d", r);
	return 0;
}