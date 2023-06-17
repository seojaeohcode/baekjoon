
//포인터를 사용해서 매개변수로 주면 원래 배열에 영향을 미칠 수 있다.
//sizeof(배열) / sizeof(자료형) = 배열 길이를 구할 수 있음

#include <stdio.h>

int search(int* arr, int size, int val){
  for(int i=0; i<size; i++){
    if(arr[i]==val){
      arr[i] = -1;
      return i;
    }
  }
  
  return -1;
}

int main() {
  int a[30], n, b[2];
  int b_index = 0;
  int size_a = sizeof(a) / sizeof(int);
  
  for(int i=1; i<31; i++){
    a[i-1] = i;
  }

  for(int i=0; i<28; i++){
    scanf("%d", &n);
    search(a, size_a, n);
  }

  for(int i=0; i<size_a; i++){
    if(a[i] != -1){
      b[b_index] = a[i];
      b_index++;
    }
  }
  
  printf("%d\n%d", b[0],b[1]);
  return 0;
}