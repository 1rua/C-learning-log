#include <stdio.h>
int main(void){
    double x,a;
    scanf("%lf" , &x);
    if(x != 0){
        a = 1.0 / x;
    }
    else{
        a = 0;
    };
    printf("f(%.1f) = %.1f\n" , x , a);
    return 0;
        
}