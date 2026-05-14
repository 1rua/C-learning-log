/* 习题2-6 求阶乘序列前N项和
分数 15
作者 C课程组
单位 浙江大学

本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。
输入格式:

输入在一行中给出一个不超过12的正整数N。
输出格式:

在一行中输出整数结果。
输入样例:
5
输出样例:
153
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB */
#include <stdio.h>
int factorial();
int main(void){
    int i , n , sum = 0;
    scanf("%d" , &n);
    for(i = 1 ; i <= n ; i++){
        sum += factorial(i);
    }
    printf("%d" , sum);
    return 0;
}
int factorial(int n){
    int i , result = 1;
    for(i = 1 ; i <= n ; i++){
        result *= i;
    }
    return result;
}