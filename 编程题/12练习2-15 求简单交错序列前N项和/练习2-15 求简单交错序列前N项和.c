#include <stdio.h>
#include <math.h>
int main(void){
    int n , N;
    double sum , s;
    scanf("%d" , &N);
    for(n = 1 ; n<= 3 * N - 2 ; n += 3){
        s = 1.0 / n;
        sum = pow(-1.0 , n - 1) * s + sum;
        }
    printf("sum = %.3f" , sum);
    return 0;
}