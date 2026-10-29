#include <stdio.h>
int a = 0;
int hanoi(int n , char x , char y , char z);
int move(int n , char x  , char z);
int main(){
    int n;
    scanf("%d" , &n);
    hanoi(n , 'x' , 'y' , 'z');
}
int hanoi(int n , char x , char y , char z){
    if(n == 1){
        move(1 , x , z);
    }
    else{
        hanoi(n - 1 , x , z , y);
        move(n , x , z);
        hanoi(n - 1 , y , x , z);
    }
}
int move(int n , char x , char z){
    printf("第%d步,将%d号盘从%c塔移到%c塔n\n" , ++a , n , x , z);
}