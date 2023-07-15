#include <stdio.h>

int main() {
  int S,T,D,Time;
  scanf("%d %d %d", &S, &T, &D);
  Time = D/(S*2);
  printf("%d", Time*T);
  return 0;
}