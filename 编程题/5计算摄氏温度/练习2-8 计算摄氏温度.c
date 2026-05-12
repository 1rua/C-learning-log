#include <stdio.h>
int main(void){
    int fahr;
    printf("ÇëÊäÈë»ªÊÏ¶È£º");
    scanf("%d", &fahr);
    int celsius = (fahr - 32) * 5 / 9;
    printf("Celsius = %d\n" , celsius);
    return 0;
}