#include <stdio.h>

int main() {
  int D1, D2, D3;
  scanf("%d %d %d", &D1, &D2, &D3);

  if(D1==D2 && D1==D3 && D2==D3){
    printf("%d", 10000+D1*1000);
  } else if(D1 != D2 && D1 != D3 && D2 != D3){
    int Big = D1>D2 ? (D1>D3 ? D1:D3) : (D2>D3 ? D2:D3);
    printf("%d", Big*100);
  } else { 
    int equal = D1==D2 ? (D1) : (D1==D3 ? D1:D3);
    printf("%d", 1000+equal*100);
  }
  
  return 0;
}
