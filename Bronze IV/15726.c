// 계산할 때는 소수점을 유의하고 코드를 적어야 한다. 2/3*4는 0과 2가 될 수 있다. 정수면 0 실수면 0.6*4로 2. 

#include <stdio.h>
int main(){
    long long A, B, C, D, E;
    scanf("%lld %lld %lld", &A, &B, &C);
    D = (double)(A * B) / C;
    E = ((double)A / B) * C;
    if (D > E)
        printf("%lld", D);
    else
        printf("%lld", E);
    return 0;
}