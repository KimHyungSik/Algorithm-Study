#include <iostream>

using namespace std;

int arr[10001];

int main() {
  int N, M;
  scanf("%d %d", &N, &M);

  for(int i = 0; i < N; i++){
    scanf("%d", &arr[i]);
  }

  int left = 0, right = 0, sum = 0, count = 0;

  while(left < N){
      if(sum >= M){
        sum -= arr[left++];
      }else if(right == N){
        sum -= arr[left++];
      }
      else if(sum < M){
        sum += arr[right++];
      }
      if(sum == M) count++;
  }
  printf("%d", count);

}
