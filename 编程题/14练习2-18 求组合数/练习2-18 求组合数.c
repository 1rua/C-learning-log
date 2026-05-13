/*
 * 练习2-18 求组合数
 * 分数：15
 * 作者：陈建海
 * 单位：浙江大学
 * 题目要求：本题要求编写程序，根据公式C(n,m)=n!/(m!(n−m)!)算出从n个不同元素中取出m个元素（m≤n）的组合数。
 * 建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。
 * 输入格式：输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
 * 输出格式：按照"result = 组合数计算结果"的格式输出。题目保证结果在double类型范围内。
 */

#include <stdio.h>
#include <math.h>
int main(void){
    int n , N , p;
    scanf("%d",&n);
    for(N = 0 ; N <= n ; N += 1){
        printf("pow(3,%d) = %d\n" , N , pow(3,N));
    }
return 0;
}