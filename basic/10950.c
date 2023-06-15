#include <stdio.h>

int main() {
  int casenum;
  int p1, p2;
  scanf("%d\n", &casenum);
  for(int i=0; i<casenum; i++){
    scanf("%d %d", &p1, &p2);
    printf("%d\n", p1+p2);
  }
  
  return 0;
}