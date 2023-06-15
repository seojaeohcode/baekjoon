
// while 무한 반복

#include <stdio.h>

int main() {
  int p1, p2;
  while(1){
    scanf("%d %d", &p1, &p2);
    if(p1==0&&p2==0){
      break;
    }
    printf("%d\n", p1+p2);
  }
  
  return 0;
}