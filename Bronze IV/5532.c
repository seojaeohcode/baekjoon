#include <stdio.h>

int main() {
	int L,A,B,C,D,E,F;
  scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
  
  if(A%C > 0){
    E = (A/C)+1;
  } else {
    E = (A/C);
  }

  if(A%C > 0){
    F = (B/D)+1;
  } else {
    F = (B/D);
  }

  if(E>F){
    printf("%d", L-E);
  } else {
    printf("%d", L-F);
  }
  
	return 0;
}