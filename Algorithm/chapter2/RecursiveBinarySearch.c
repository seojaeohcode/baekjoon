
//이진탐색 : 가운데를 중점으로 탐색을 좁히는 방법
//재귀적으로 만든 버전

#include <stdio.h>

int BSearch(int ar[], int first, int last, int target){
    int mid;
    if(first>last)
        return -1;
    mid = (first+last)/2;
    if(ar[mid]==target)
        return mid;
    else if(target<ar[mid])
        return BSearch(ar, mid+1, last, target);
    else
        return BSearch(ar, first, mid+1, last, target);
}

int main(void) {
  int arr[] = {1,3,5,7,9};
  int idx;

  idx = BSearch(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
  if(idx == -1){
    printf("탐색 실패");
  } else{
    printf("타겟 저장 인덱스: %d \n", idx);
  }

  return 0;
}
