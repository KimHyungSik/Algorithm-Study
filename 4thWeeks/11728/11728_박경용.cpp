#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr_a[1000000];
int arr_b[1000000];

int main(void)
{
    int m = 0, n = 0;
    int ix_a = 0, ix_b = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", arr_a + i);

    for (int i = 0; i < m; i++)
        scanf("%d", arr_b + i);

    for (int i = 0; i < m + n; i++)
    {
        if (ix_a < n && ix_b < m)
        {
            if (arr_a[ix_a] < arr_b[ix_b])
                printf("%d ", arr_a[ix_a++]);
            else
                printf("%d ", arr_b[ix_b++]);
        }
        else if (ix_a < n)
            printf("%d ", arr_a[ix_a++]);
        else if (ix_b < m)
            printf("%d ", arr_b[ix_b++]);
    }

    return 0;
}