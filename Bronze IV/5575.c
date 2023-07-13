#include <stdio.h>

int main() {
  int start[3], end[3], total=0, h=0, m=0, s=0;
  
  for(int i=0; i<3; i++){
    scanf("%d %d %d %d %d %d", &start[0], &start[1], &start[2], &end[0], &end[1], &end[2]);
    
    total = (end[0]*3600+end[1]*60+end[2]) - (start[0]*3600+start[1]*60+start[2]);
    
    h = total/3600;
    total = total-h*3600;
    m = total/60;
    total = total-m*60;
    s = total%60;
    
    printf("%d %d %d\n", h, m, s);
  }
	return 0;
}