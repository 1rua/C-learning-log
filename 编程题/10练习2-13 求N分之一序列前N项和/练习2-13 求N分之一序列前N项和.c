#include <stdio.h>
int main(void){
    int n , N;
    double sum , s;
    scanf("%d" , &N);
    for(n = 1 ; n<= N ; n += 1){
        s = 1.0 / n;
        sum += s;
        }
    printf("sum = %.6f" , sum);
    return 0;
}