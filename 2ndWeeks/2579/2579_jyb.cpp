/*
objective : climb to the top of the stairs
each stair has points

stair protocol
1. you can climb the stairs by 1 or 2 steps
2. you cannot take 1 step, 3 times in succession
3. the last stair must be stepped on

a. first input is the number of stairs
b. number of stairs must be a natural number under 200
c. the max points a stair can have is a natural number under 10,000

write a program that gets you the highest points
*/

#include <stdio.h>
#pragma warning (disable : 4996)

int max(int a, int b) { return a > b ? a : b; }

int main() {

    int n, i;
    int arr[300];
    int dp[300];

    scanf("%d", &n);

    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    dp[0] = arr[0];
    dp[1] = max(arr[0] + arr[1], arr[1]);
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);

    for (i = 3; i < n; i++) 
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);

    printf("%d\n", dp[n - 1]);

    return 0;
}