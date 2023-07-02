
// 3가지 파일 임포트 필요.

#include <stdio.h>

int main(void) {
  List list
  int data;
  ListInit(&list);

  LInsert(&list, 11); LInsert(&list, 11);
  LInsert(&list, 22); LInsert(&list, 22);
  LInsert(&list, 33);

  printf("현재 데이터의 수 : %d \n", Lcount(&list));

  if(LFirst(&list, &data)){
    printf("%d ", data);
    
    while(LNext(&list, &data))
        printf("%d ", data);
  }
  printf("\n\n");

  if(LFirst(&list, &data)){
    if(data == 22){
        LRemove(&list);
    }
    
    while(LNext(&list, &data)){
        if(data == 22){
            LRemove(&list);
        }
    }
  }

  printf("현재 데이터의 수 : %d \n", Lcount(&list));

  if(LFirst(&list, &data)){
    printf("%d ", data);
    
    while(LNext(&list, &data))
        printf("%d ", data);
  }

  return 0;
}
