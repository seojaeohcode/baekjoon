#include <stdio.h>

long long factorial(long long x){
  if(x==0)
  {
    return 1;
  }
  else
  {
    return x*factorial(x-1);
  }  
}

int main() {
  long long N = 0;
  scanf("%lld", &N);
  printf("%lld", factorial(N));
  return 0;
}