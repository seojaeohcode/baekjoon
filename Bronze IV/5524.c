#include <stdio.h>
#include <string.h>

int main() {
	int repeat;
  char str[20];
  scanf("%d", &repeat);
  for(int i=0; i<repeat; i++){
    scanf("%s", str);
    for(int j=0; j<strlen(str); j++){
      if(str[j]<91){
        str[j] += 32;
      }
    }
    printf("%s\n",str);
  }
	return 0;
}