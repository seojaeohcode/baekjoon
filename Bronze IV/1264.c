
// scanf를 한 칸 띄면 왜 정상작동하지?
// scanf를 한 칸 띄면 이전의 문자를 무시하고 새로 받아야하는 줄의 문자열만 처리한다고 한다.

#include <stdio.h>
#include <string.h>

int main() {
  char str[256];
  int result = 0;

  while (1) {
    scanf(" %[^\n]s", str);

    if (strcmp(str, "#") == 0) {
      break;
    } else {
      for (int i = 0; i < strlen(str); i++) {
        if (
          str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
          result++;
 }
      }

      printf("%d\n", result);  // 변경된 부분
      result = 0;
    }
  }

  return 0;
}