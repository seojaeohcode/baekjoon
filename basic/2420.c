
//자료형 진짜 잘 체크해야 함.

#include <stdio.h>
#include<stdlib.h>

int main() {
  long long N,M;
  scanf("%lld %lld", &N, &M);
  printf("%lld", llabs(N-M));
  return 0;
}