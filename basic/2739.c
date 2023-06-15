#include <stdio.h>

int main() {
  int p1;
  scanf("%d", &p1);

  for (int i = 1; i < 10; i++) {
    printf("%d * %d = %d\n", p1, i, p1 * i);
  }

  return 0;
}