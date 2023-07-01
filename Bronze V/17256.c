#include <stdio.h>

int main() {
  int A[3], C[3];
  scanf("%d %d %d", &A[0], &A[1], &A[2]);
  scanf("%d %d %d", &C[0], &C[1], &C[2]);

  printf("%d %d %d", C[0]-A[2], C[1]/A[1], C[2]-A[0]);
  
  return 0;
}