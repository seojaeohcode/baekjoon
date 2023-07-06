#include <stdio.h>

int main() {
  int A, B, C, max;
  scanf("%d %d %d", &A, &B, &C);
  
  max = A>B ? (A>C ? A:C) : (B>C ? B:C);

  if(max == A){
    if(B>C){
      printf("%d %d %d", C, B, max);
    } else {
      printf("%d %d %d", B, C, max);
    }
  } else if (max == B) {
    if(A>C){
      printf("%d %d %d", C, A, max);
    } else {
      printf("%d %d %d", A, C, max);
    }
  } else if (max == C) {
    if(A>B){
      printf("%d %d %d", B, A, max);
    } else {
      printf("%d %d %d", A, B, max);
    }
  }
  
  return 0;
}
