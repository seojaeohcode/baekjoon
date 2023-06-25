#include <stdio.h>

int main()
{
    long long num, p1, p2;
    scanf("%lld", &num);
  
    for(int i=0; i<num; i++){
      scanf("%lld %lld", &p1, &p2);
      printf("%lld\n", p1+p2);
    }
  
    return 0;
}