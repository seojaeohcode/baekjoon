#include <stdio.h>

int main() {
  int height, total = 0;
  
  while(scanf("%d", &height) == 1 && height != 0){
    for(int i=1; i<=height; i++){
      total += i;
    }
    printf("%d\n", total);
    total = 0;
  }
  
  return 0;
}