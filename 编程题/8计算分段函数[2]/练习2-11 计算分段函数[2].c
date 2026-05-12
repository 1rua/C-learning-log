#include <stdio.h>
#include <math.h>
int main(void){
    double x,f;
    scanf("%lf" , &x);
    if(x >= 0){
        f = pow(x , 0.5);
    }
    else{
        f = pow(x + 1 , 2) + (2 * x) + (1 / x);
    };
    printf("f(%.2f) = %.2f\n" , x , f);
    return 0;
        
}