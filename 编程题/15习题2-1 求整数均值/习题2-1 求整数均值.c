/* 习题2-1 求整数均值
分数 10
作者 乔林
单位 清华大学

本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。
输入格式:

输入在一行中给出4个整数，其间以空格分隔。 
输出格式:

在一行中按照格式“Sum = 和; Average = 平均值”顺序输出和与平均值，其中平均值精确到小数点后一位。 
输入样例:
1 2 3 4
输出样例:
Sum = 10; Average = 2.5
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB
 */
#include <stdio.h>

double Sum() , Average();
int main(void){
    int a , b , c , d;
    scanf("%d %d %d %d" , &a , &b , &c , &d); 
    printf("Sum = %.0f; Average = %.1f" , Sum(a,b,c,d) , Average(a,b,c,d));
    return 0;
}
double Sum(int a , int b , int c , int d){
    double sum;
    sum = a + b + c + d;
    return sum;
}
double Average(int a , int b , int c , int d){
    double average = ( a + b + c + d ) / 4.0;
    return average;
}