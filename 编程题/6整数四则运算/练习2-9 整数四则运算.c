/*
 * 练习2-9 整数四则运算
 * 分数：10
 * 作者：陈建海
 * 单位：浙江大学
 * 题目要求：本题要求编写程序，计算2个正整数的和、差、积、商并输出。
 * 题目保证输入和输出全部在整型范围内。
 * 输入格式：在一行中给出2个正整数A和B。
 * 输出格式：在4行中按照格式"A 运算符 B = 结果"顺序输出和、差、积、商。
 */

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