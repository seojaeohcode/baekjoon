#include <stdio.h>
#include <string.h>

int main() {
  char c[2];
  scanf("%s", c);

  if(strcmp(c, "A+") == 0){
    printf("%.1f", 4.3);
  } else if (strcmp(c, "A0") == 0){
    printf("%.1f", 4.0);
  } else if (strcmp(c, "A-") == 0){
    printf("%.1f", 3.7);
  } else if (strcmp(c, "B+") == 0){
    printf("%.1f", 3.3);
  } else if (strcmp(c, "B0") == 0){
    printf("%.1f", 3.0);
  } else if (strcmp(c, "B-") == 0){
    printf("%.1f", 2.7);
  } else if (strcmp(c, "C+") == 0){
    printf("%.1f", 2.3);
  } else if (strcmp(c, "C0") == 0){
    printf("%.1f", 2.0);
  } else if (strcmp(c, "C-") == 0){
    printf("%.1f", 1.7);
  } else if (strcmp(c, "D+") == 0){
    printf("%.1f", 1.3);
  } else if (strcmp(c, "D0") == 0){
    printf("%.1f", 1.0);
  } else if (strcmp(c, "D-") == 0){
    printf("%.1f", 0.7);
  } else if (strcmp(c, "F") == 0){
    printf("%.1f", 0.0);
  }
  return 0;
}