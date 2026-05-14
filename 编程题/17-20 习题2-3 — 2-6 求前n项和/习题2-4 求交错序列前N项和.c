/* 习题2-4 求交错序列前N项和
分数 15
作者 陈建海
单位 浙江大学

本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
输入格式:

输入在一行中给出一个正整数N。
输出格式:

在一行中输出部分和的值，结果保留三位小数。
输入样例:
5
输出样例:
0.917
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB */
#include <stdio.h>
#include <math.h>
int main(void){
    int n , i;
    double sum = 0.0;
    scanf("%d" , &n);
        for(i = 1; i <= n ; i++ ){
        sum += pow(-1 , i - 1) * (double)i / (2 * i - 1);
        }
    printf("%.3f\n" , sum);
    return 0;
}