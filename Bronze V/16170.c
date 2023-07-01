#include <stdio.h>
#include <time.h> 

int main() {
  time_t timer;
  struct tm* t;
  timer = time(NULL);
  t = localtime(&timer);

  printf("%d\n", t->tm_year + 1900);
  if(t->tm_mon + 1 < 10){
    printf("0%d\n", t->tm_mon + 1);
  }else{
    printf("%d\n", t->tm_mon + 1);
  }
  
  if(t->tm_mday < 10){
    printf("0%d\n", t->tm_mday);
  }else{
    printf("%d\n", t->tm_mday);
  }
  
  return 0;
}