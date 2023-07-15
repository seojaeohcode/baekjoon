#include <stdio.h>

int main() {
  int arr[5], time=0;
  
  for(int i=0; i<5; i++){
    scanf("%d", &arr[i]);
  }

  if(arr[0]<0){
    time += -1*arr[0]*arr[2];
    arr[0]=0;
  }

  if(arr[0]==0){
    time += arr[3];
  }

  time += (arr[1]-arr[0])*arr[4];
  
  printf("%d", time);
  return 0;
}