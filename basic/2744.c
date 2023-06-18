
// 대소문자 변환은 아스키코드로. 딱 32차이남.

#include <stdio.h>

int main() {
  char c[100];
  scanf("%s", c);

  for(int i=0; c[i]!=0; i++){
    if(c[i]>='A'&&c[i]<='Z'){
      c[i] = c[i] + 32;
    } else if (c[i]>='a'&&c[i]<='z'){
      c[i] = c[i] - 32;
    }
  }

  printf("%s", c);
  return 0;
}