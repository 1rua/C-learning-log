/*
 * 练习2-15 求简单交错序列前N项和
 * 分数：15
 * 作者：C课程组
 * 单位：浙江大学
 * 题目要求：本题要求编写程序，计算交错序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
 * 输入格式：输入在一行中给出一个正整数N。
 * 输出格式：在一行中按照"sum = S"的格式输出前N项的和S，精确到小数点后3位。题目保证计算结果不超过双精度范围。
 */

#include <stdio.h>
#include <math.h>
int main(void){
    int n , N;
    double sum , s;
    scanf("%d" , &N);
    for(n = 1 ; n<= 3 * N - 2 ; n += 3){
        s = 1.0 / n;
        sum = pow(-1.0 , n - 1) * s + sum;
        }
    printf("sum = %.3f" , sum);
    return 0;
}