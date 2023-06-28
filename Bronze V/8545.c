
//문자열 뒤집기

#include <stdio.h>

int main() {
  char arr[4];
  scanf("%s", arr);

  for(int i=2; i>=0; i--){
    printf("%c", arr[i]);
  }
  
  return 0;
}