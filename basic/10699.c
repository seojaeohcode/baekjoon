
// time 함수와 문자배열 사용('' / "" 주의) [10]=""만 가능 ''은 오류남

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    time_t raw_time;
    struct tm* time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);
    
    int year = time_info->tm_year + 1900;
    int month = time_info->tm_mon + 1;
    int day = time_info->tm_mday;

    char fix_month[3];
    char fix_help_month[10] = "0";
    char fix_day[3];
    char fix_help_day[10] = "0";

  
    if (month < 10) {
      sprintf(fix_month, "%d", month);
      strcat(fix_help_month, fix_month);
    } else { 
      sprintf(fix_month, "%d", month);
    }

    if (day < 10) {
      sprintf(fix_day, "%d", day);
      strcat(fix_help_day, fix_day);
    } else {
      sprintf(fix_day, "%d", day);
    }
  
    printf("%d-%s-%s",year, fix_help_month, fix_help_day);
    return 0;
}