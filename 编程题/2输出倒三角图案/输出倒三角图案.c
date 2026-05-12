#include <stdio.h>
int main(void)
{
    int j, i;
    for(i = 0; i<4; i++){
        for(j = 0; j<i; j++){
        printf(" ");
    }
        for(j = 0; j<4-i; j++){
            if (j > 0){
                 printf(" ");
            }
        printf("*");
    }
    printf("\n");
}
    return 0;
}
