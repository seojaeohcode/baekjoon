//아스키코드 이용

#include <stdio.h>
#include <string.h>

int main() {
  int Beta[26]={0,};
  char str[101];
  scanf("%s", str);

  for(int i=0; i<strlen(str); i++){
    Beta[str[i]-97]++;
  }

  for(int j=0; j<26; j++){
    printf("%d ", Beta[j]);
  }
	return 0;
}