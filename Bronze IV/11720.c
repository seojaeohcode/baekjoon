//문자 => 숫자로 변환.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, T=0;
  char X[101]={0,};
  scanf("%d", &N);
  scanf("%s", X);
  
  for(int i=0; i<N; i++){
    T += X[i]-'0';
  }
  
  printf("%d",T);
	return 0;
}