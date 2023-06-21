
//입력에 등호를 쓰면 입력 개수를 체크할 수 있고, 그 뒤에 값을 체크할 수 있음.

#include <stdio.h>

int main() {
  int p1, p2;
  
  while(scanf("%d %d", &p1, &p2) == 2 && (p1 != 0 || p2 != 0)){
    if(p1>p2){
      printf("Yes\n"); 
    }else{
      printf("No\n");
    }
  };
  
  return 0;
}