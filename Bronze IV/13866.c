
// 선택정렬 & Swap 알고리즘

#include <stdio.h>

int main() {
  int S[4], temp;
  
  for(int i=0; i<4; i++){
    scanf("%d", &S[i]);
  }

  for(int j=0; j<3; j++){
    for(int k=j+1; k<4; k++){
      if(S[j]>S[k]){
        temp = S[j];
        S[j] = S[k];
        S[k] = temp;
      }
    }
  }

  if(S[0]+S[3]>S[1]+S[2]){
    printf("%d", (S[0]+S[3])-(S[1]+S[2]));
  } else if (S[1]+S[2]>S[0]+S[3]){
    printf("%d", (S[1]+S[2])-(S[0]+S[3]));
  } else {
    printf("%d", (S[0]+S[3])-(S[1]+S[2]));
  }
  
  return 0;
}