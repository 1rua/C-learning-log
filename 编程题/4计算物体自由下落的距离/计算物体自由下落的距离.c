/*
 * 练习2-6 计算物体自由下落的距离
 * 分数：5
 * 作者：C课程组
 * 单位：浙江大学
 * 题目要求：一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。
 * 设重力加速度为10米/秒^2。
 * 输入格式：本题目没有输入，要求输出公式：height = 1/2 * g * t^2，其中g=10，t=3。
 * 输出格式：按照下列格式输出。
 * height = 垂直距离值
 * 结果保留2位小数。
 */

#include <stdio.h>
#include <math.h>
int main(void){
    int i = 3;
    double height;
    height = 10 * pow(i,2) / 2;
    printf("height = %.2f\n",height);
    return 0;
}