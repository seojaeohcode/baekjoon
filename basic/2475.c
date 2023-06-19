
// 입력 1줄은 반복문으로 받을 수 있다.

#include <stdio.h>
#include <math.h>

int main() {
  int N[5], result;

  for(int i=0; i<5; i++){
    scanf("%d", &N[i]);
  }
  
  for(int i=0; i<5; i++){
    result += pow(N[i], 2);
  }

  printf("%d", result%10);
  
  return 0;
}