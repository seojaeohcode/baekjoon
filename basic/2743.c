
//문자열의 끝은 0

#include <stdio.h>

int main() {
  char c[100];
  int length = 0;
  scanf("%s", c);

  for(int i=0; c[i]!=0; i++){
    length++;
  }

  printf("%d", length);
  return 0;
}