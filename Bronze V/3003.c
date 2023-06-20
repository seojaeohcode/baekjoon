#include <stdio.h>

int main() {
    int ok[6]={ 1, 1, 2, 2, 2, 8};
    int cur[6];
    for(int i=0; i<6; i++){
      scanf("%d", &cur[i]);
    }

    for(int i=0; i<6; i++){
      printf("%d ", ok[i] - cur[i]);
    }

    return 0;
}