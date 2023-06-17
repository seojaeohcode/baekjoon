
// 입력을 한줄로 주는데, 개수가 정해져 있지 않고, 공백으로 구분하면 반복문 입력 사용

#include <stdio.h>

int main() {
  int N, X;
  scanf("%d %d", &N, &X);
  int a[N];
  int b[N];
  
  for(int i=0; i<N; i++){
    scanf("%d", &a[i]);
  }

  for(int i=0; i<N; i++){
    if(a[i] < X){
      printf("%d ",a[i]);
    }
  }
  
  return 0;
}