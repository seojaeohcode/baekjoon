#include <stdio.h>

int main() {
  int L, P, N[5];
  scanf("%d %d", &L, &P);
  scanf("%d %d %d %d %d", &N[0], &N[1], &N[2], &N[3], &N[4]);

  for(int i=0; i<5; i++){
    N[i] = N[i]-(L*P);
  }

  printf("%d %d %d %d %d", N[0], N[1], N[2], N[3], N[4]);
  
  return 0;
}
