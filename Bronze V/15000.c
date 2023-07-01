
// 함수를 반복문에서 쓰면 연산이 엄청 많아짐. strlen(string); 이런거 조건문에서 쓰지말고
// 꼭 변수 할당해서 연산은 1번만 하도록! 시간초과남.

#include <stdio.h>
#include <string.h>

int main() {
  char string[1000001];
  scanf("%s", string);
  int length = strlen(string);
  for(int i=0; i<length; i++){
    printf("x");
    string[i] = string[i]-32;
  }
  printf("%s", string);
  return 0;
}