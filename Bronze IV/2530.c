#include <stdio.h>

int main() {
  int H, M, S, S2;
  scanf("%d %d %d", &H, &M, &S);
  scanf("%d", &S2);

  H += S2/3600;
  S2 -= (S2/3600)*3600;
  M += S2/60;
  S2 -= (S2/60)*60;
  S += S2%60;

  if(S>=60){
    M+=1;
    S-=60;
  }
  if(M>=60){
    H+=1;
    M-=60;
  }
  if(H>=24){
    H=H%24;
  }
    
  printf("%d %d %d", H, M, S);
  
  return 0;
}
