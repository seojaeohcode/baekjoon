
//이진탐색 : 가운데를 중점으로 탐색을 좁히는 방법
//재귀적으로 만든 버전
//3ABC 2ACB 1ABC => 1ABC출 2ACB출 1CAB => 3ABC출 2...

#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to){
    if(num == 1)
    {
        printf("원반1을 %c에서 %c로 이동\n", from, to);
    }
    else
    {
        HanoiTowerMove(num-1, from, to, by);
        printf("원반%d을(를) %c에서 %c로 이동\n", num, from, to);
        HanoiTowerMove(num-1, by, from, to);
    }
}

int main(void) {
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}
