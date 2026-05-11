#include <stdio.h>
int main(void)
{
    int j, i;
    for(i = 0; i<5; i++){
        for(j = 0; j<i; j++){
        printf(" ");
    }
        for(j = 0; j<4-i; j++){
        printf(" *");
    }
    printf("\n");
}
    return 0;
}
