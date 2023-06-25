
//버블정렬 
//1번부터 끝번까지 비교하되, 맨 끝부터 1개씩 정리되면서 반복횟수를 줄임.
//https://gyoogle.dev/blog/algorithm/Bubble%20Sort.html

#include <stdio.h>

void bubble(int arr[], int count)    // 매개변수로 정렬할 배열과 요소의 개수를 받음
{
    int temp;

    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < count - i; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[j] > arr[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
}

int main()
{
    
    int numArr[3];   // 정렬되지 않은 배열

    for(int i=0; i<3; i++){
      scanf("%d", &numArr[i]);
    }
  
    bubble(numArr, sizeof(numArr) / sizeof(int));    // 거품 정렬 함수 호출
    printf("%d", numArr[1]);

    return 0;
}