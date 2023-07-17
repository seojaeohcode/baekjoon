#include <stdio.h>

int main() {
  unsigned long long N, M;
  scanf("%llu %llu", &N, &M);
  printf("%llu", N * M / 2);
  return 0;
}