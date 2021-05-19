#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m;
long long arr1[1000000];
long long arr2[1000000];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%lld", &arr2[i]);
    }
    
    int x = 0;
    int y = 0;

    while (1) {
        if (x == n || y == m) {
            break;
        }
        
        if (arr1[x] == arr2[y]) {
            printf("%lld %lld ", arr1[x], arr2[y]);
            x++;
            y++;
        }
        else if (arr1[x] < arr2[y]) {
            printf("%lld ", arr1[x]);
            x++;
        }
        else {
            printf("%lld ", arr2[y]);
            y++;
        }
    }

    while (x != n) {
        printf("%lld ", arr1[x]);
        x++;
    }
    while (y != m) {
        printf("%lld ", arr2[y]);
        y++;
    }
    printf("\n");
}
