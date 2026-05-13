/*
 * 分段函数计算
 * 题目要求：计算分段函数的值。
 * 当x等于0时，f(x) = 0；当x不等于0时，f(x) = 1/x。
 * 输入格式：输入一个实数x。
 * 输出格式：输出f(x)的值，保留一位小数。
 */

#include <stdio.h>

int main() {
    double x, result;
    
    // 读取输入
    scanf("%lf", &x);
    
    // 计算分段函数
    if (x == 0) {
        result = 0;
    } else {
        result = 1.0 / x;
    }
    
    // 输出结果，保留一位小数
    printf("f(%.1f) = %.1f\n", x, result);
    
    return 0;
}
