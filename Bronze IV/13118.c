#include <stdio.h>

int main() {
  int P[4], A[3], result=-1;
  for(int i=0; i<4; i++){
    scanf("%d", &P[i]);
  }

  for(int j=0; j<3; j++){
    scanf("%d", &A[j]);
  }

  for(int k=0; k<4; k++){
    if(P[k]==A[0]){
      result = k+1;
    }
  }
  
  if(result==-1){
    printf("0");
  } else {
    printf("%d", result);
  }
  
	return 0;
}