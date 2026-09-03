#include <stdio.h>
int main(void){
    int n , i , arr[10000];
    scanf("%d" , &n);
    scanf("%d" , &arr[0]);
    for(i = 1 ; i < n ; i++){
        scanf("%d" , &arr[i]);
        if(arr[i] > arr[i-1]){
            arr[i] = arr[i-1];
        }
    }
    printf("min = %d" , arr[n-1]);
    
    return 0;
}
/* 练习4-10 找出最小值
分数 20
作者 颜晖
单位 浙大城市学院

本题要求编写程序，找出给定一系列整数中的最小值。
输入格式：

输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。
输出格式：

在一行中按照“min = 最小值”的格式输出n个整数中的最小值。
输入样例：
4 -2 -123 100 0
输出样例：
min = -123
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB */