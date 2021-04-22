#include <iostream>

int main(){
  int n;
  long long DP[91];
  scanf("%d", &n);
  DP[0] = 0;
  DP[1] = 1;
  for(int i = 2; i <= n; i++){
    DP[i] = DP[i - 1] + DP[i - 2];
  }
  printf("%lli", DP[n]);
  return 0;
}
