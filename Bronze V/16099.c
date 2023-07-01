#include <stdio.h>

int main() {
  int t; 
  long lt, wt, le, we;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%ld %ld %ld %ld", &lt, &wt, &le, &we);
    if(lt*wt > le*we){
      printf("TelecomParisTech");
    } else if(lt*wt < le*we) {
      printf("Eurecom");
    } else {
      printf("Tie");
    }
    if(i != t-1){
      printf("\n");
    }
  }
  return 0;
}