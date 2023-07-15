#include <stdio.h>

int main() {
  int F[2], S[2], C1, C2;
  scanf("%d %d", &F[0], &F[1]);
  scanf("%d %d", &S[0], &S[1]);

  C1 = F[0]+S[1];
  C2 = S[0]+F[1];

  if(C1<C2){
    printf("%d", C1);
  } else if(C2<C1){
    printf("%d", C2);
  } else{
    printf("%d", C1);
  }
  
	return 0;
}