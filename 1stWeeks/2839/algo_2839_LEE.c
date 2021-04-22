#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, cnt = 0;
    scanf("%d", &i);

    for (;1;) {
        if (i % 5 == 0) {
            cnt += i / 5;
            break;
        }
        i -= 3;
        cnt += 1;
        if (i <= 0) {
            break;
        }
    }

    if (i < 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", cnt);
    }
}