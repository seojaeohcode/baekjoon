
// 캐스팅과 소수점 자리수

#include <stdio.h>

int main() {
  int p1;
  int p2;
  scanf("%d %d", &p1, &p2);
  printf("%.10f", (double) p1 / (double) p2 );
  return 0;
}