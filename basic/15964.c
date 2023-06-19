
// 자료 크기 제대로 보자.

#include <stdio.h>
#include <string.h>

long long calculation(long long A, long long B){
  return (A+B)*(A-B);
}

int main() {
  long long A, B;
  scanf("%lld %lld", &A, &B);
  printf("%lld", calculation(A,B));

  return 0;
}