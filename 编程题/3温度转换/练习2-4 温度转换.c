#include <stdio.h>
int main(void){
    int fahr = 150;
    int celsius = (fahr - 32) * 5 / 9;
    printf("fahr = %d, celsius = %d" , fahr, celsius);
    return 0;
}