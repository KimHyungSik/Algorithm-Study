#include <iostream>
#include <algorithm>

using namespace std;

bool findNum(int x,int max ,int *arr){
  int left = 0;
  int right = max-1;
  while(left <= right){
    int mid = (left+right)/2;
    if(x < arr[mid]){
      right = mid-1;
    }else if( x > arr[mid]){
      left = mid +1;
    }
    if(x == arr[mid]) return 1;
  }
  return 0;
}

int main() {
  int n,m,temp;
  int A[100001];

  scanf("%d", &n);
  for(int i = 0 ; i < n;i++){
    scanf("%d", &A[i]);
  }
  sort(A,A+n);
  scanf("%d", &m);
  if(m == 1){
    scanf("%d", &temp);
    for(int i = 0;i < n;i++){
      if(A[i] == temp){
        cout<<1;
        return 0;
      }
    }
    cout<<0;
    return 0;
  }

  for(int i = 0 ; i < m;i++){
    scanf("%d", &temp);
    printf("%d\n",findNum(temp,n,A));
  }
return 0; 
}