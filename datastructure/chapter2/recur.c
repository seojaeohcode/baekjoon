#include <stdio.h>

int main() {
  int N=0;
  for(int i=10; i>0; i=i-3){
    N+=i;
  }
  printf("%d", N);
  return 0;
}