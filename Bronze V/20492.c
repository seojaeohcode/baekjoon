#include <stdio.h>

int main() {
  long N=0;
  scanf("%ld", &N);
  printf("%.0f %.0f", N-(N*0.22), N-((N*0.2)*0.22));
  
  return 0;
}