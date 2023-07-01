#include <stdio.h>

int main() {
  int L1, L2=0, t=0;
  scanf("%d", &L1);
  
  while(L1>L2){
    L2 += 5;
    t++;
  }
  
  printf("%d", t);
  return 0;
}