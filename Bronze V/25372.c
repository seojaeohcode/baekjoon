#include <stdio.h>
#include <string.h>

int main() {
  int j = 0;
  char str[21];

  scanf("%d", &j);
  
  for(int i=0; i<j; i++){
    scanf("%s", str);
    
    if(strlen(str)>=6 && strlen(str)<=9)
    {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }  
  
  return 0;
}