#include <stdio.h>

int main() {
  int score, total = 0;
  
  while(scanf("%d", &score) != EOF){
    total+=score;
  }
  printf("%d\n", total); 
  return 0;
}