
// strlen으로 length 체크 빠르게.

#include <stdio.h>
#include <string.h>

int main() {
  int testcase;
  char c[1000];

  scanf("%d", &testcase);

  for (int i = 0; i < testcase; i++) {
    scanf("%s", c);
    if ((int)strlen(c) < 2) {
      printf("%c%c\n", c[0], c[0]);
    } else {
      printf("%c%c\n", c[0], c[(int)strlen(c) - 1]);
    }
  }

  return 0;
}