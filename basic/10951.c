
//주의! 입력에 대해 종료기점이 없으면 EOF

#include <stdio.h>

int main() {
  int p1, p2;
  while(scanf("%d %d", &p1, &p2) != EOF){
    printf("%d\n", p1+p2);
  }
  
  return 0;
}