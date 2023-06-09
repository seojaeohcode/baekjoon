
// scanf를 통해 입력 &로 변수의 주소를 가져와서 값을 넣어줌.

#include <stdio.h>

int main() {
  int p1;
  int p2;
  scanf("%d %d", &p1, &p2);
  int total = p1+p2;
  printf("%d", total);
  return 0;
}