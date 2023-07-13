#include <stdio.h>

int main() {
  int D[2];
  scanf("%d %d", &D[0], &D[1]);
  if(D[0]==2&D[1]==18){
    printf("Special");
  } else if(D[0]>2 || (D[0]==2&&D[1]>18)){
    printf("After");
  } else {
    printf("Before");
  }
    
	return 0;
}