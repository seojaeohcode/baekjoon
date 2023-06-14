#include <stdio.h>
#include<stdlib.h>

int main() {
  int num;
  int total = 1;
  scanf("%d", &num);
  for(int i=num; i>=1; i--){
    total = total*i;
  }
  printf("%d", total);
  return 0;
}