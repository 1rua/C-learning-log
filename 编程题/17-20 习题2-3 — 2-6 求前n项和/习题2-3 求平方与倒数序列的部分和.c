/* 习题2-3 求平方与倒数序列的部分和
分数 15
作者 C课程组
单位 浙江大学

本题要求对两个正整数m和n（m≤n）编写程序，计算序列和m2+1/m+(m+1)2+1/(m+1)+⋯+n2+1/n。
输入格式:

输入在一行中给出两个正整数m和n（m≤n），其间以空格分开。
输出格式:

在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
输入样例:
5 10
输出样例:
sum = 355.845635
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
    int m , n , i;
    double sum = 0.0;
    scanf("%d %d" , &m , &n);
        for(i = m; i <= n ; i++ ){
        sum += pow(i , 2) + pow(i , -1);
        }
    printf("sum = %.6f\n" , sum);
    return 0;
}