#include <stdio.h>

int main() {
  int S[4], T[4], ST, TT;
  scanf("%d %d %d %d", &S[0], &S[1], &S[2], &S[3]);
  scanf("%d %d %d %d", &T[0], &T[1], &T[2], &T[3]);
  
  ST = S[0]+S[1]+S[2]+S[3];
  TT = T[0]+T[1]+T[2]+T[3];
  
  if(ST>=TT){
    printf("%d", ST);
  }  else {
    printf("%d", TT);
  }
    
	return 0;
}