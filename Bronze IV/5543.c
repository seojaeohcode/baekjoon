#include <stdio.h>

int main() {
	int Berger[3], Beverage[2], min=-1;
  scanf("%d %d %d %d %d", &Berger[0], &Berger[1], &Berger[2], &Beverage[0], &Beverage[1]);

  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      if(min == -1){
        min = Berger[i] + Beverage[j] - 50;
      } else {
        if(min > Berger[i] + Beverage[j] - 50){
          min = Berger[i] + Beverage[j] - 50;
        }
      }
    }
  }

  printf("%d", min);
  
	return 0;
}