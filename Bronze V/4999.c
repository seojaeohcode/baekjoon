#include <stdio.h>
#include <string.h>

int main() {
  char ah1[1000], ah2[1000];
  scanf("%s", ah1);
  scanf("%s", ah2);
  if(strlen(ah1) > strlen(ah2)){
    printf("go");
  } else {
    printf("no");
  }
  
  return 0;
}