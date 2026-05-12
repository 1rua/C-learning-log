#include <stdio.h>
int main(void){
    int A , B;
    scanf("%d %d" , &A , &B);
    int he,cha,ji,shang; 
    he = A + B;
    cha = A - B;
    ji = A * B;
    shang = A / B;
    printf("%d + %d = %d\n" , A , B , he);
    printf("%d - %d = %d\n" , A , B , cha);
    printf("%d * %d = %d\n" , A , B , ji);
    printf("%d / %d = %d\n" , A , B , shang);
    return 0;
}