#include <stdio.h>
int main(void){
    int lower , upper , fahr;
    double celsius;
    scanf("%d %d" , &lower , &upper);
    if(lower <= upper  && upper <= 100){
        printf("fahr celsius\n");
        for(fahr = lower ; fahr <= upper ; fahr += 2){
            
            celsius = (fahr - 32) * 5.0 / 9.0;
            printf("%d%6.1f\n" , fahr , celsius); 
        }
        
    }
    else{
        printf("Invalid.\n");
    }
    
    return 0;
}