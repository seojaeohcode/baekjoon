#include <stdio.h>

int main() {
  int time[4], total=0;
  for(int i=0; i<4; i++){
    scanf("%d", &time[i]);
  }
  total = time[0]+time[1]+time[2]+time[3];
  
  printf("%d\n%d", total/60, total%60);
  
	return 0;
}