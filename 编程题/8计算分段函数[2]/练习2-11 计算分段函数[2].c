/*
 * 练习2-11 计算分段函数[2]
 * 分数：10
 * 作者：陈建海
 * 单位：浙江大学
 * 题目要求：本题目要求计算下列分段函数f(x)的值：
 * 当x大于等于0时，f(x) = √x；当x小于0时，f(x) = (x+1)^2 + 2x + 1/x。
 * 注：可在头文件中包含math.h，并调用sqrt函数求平方根，调用pow函数求幂。
 * 输入格式：输入在一行中给出实数x。
 * 输出格式：在一行中按"f(x) = y"的格式输出，其中x与y都保留两位小数。
 */

#include <stdio.h>
#include <math.h>
int main(void){
    double x,f;
    scanf("%lf" , &x);
    if(x >= 0){
        f = pow(x , 0.5);
    }
    else{
        f = pow(x + 1 , 2) + (2 * x) + (1 / x);
    };
    printf("f(%.2f) = %.2f\n" , x , f);
    return 0;
    
}