
// C 입출력 가장 최적화 : printf scanf. 줄바꿈때문에 틀리지 않도록 하자.

#include <stdio.h>

int main() {
  int testcase, p1, p2;
  scanf("%d\n", &testcase);

  for (int i = 0; i < testcase; i++) {
    scanf("%d %d", &p1, &p2);
    printf("%d\n", p1 + p2);
  }

  return 0;
}