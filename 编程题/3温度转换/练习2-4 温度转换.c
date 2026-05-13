/*
 * 练习2-4 温度转换
 * 分数：5
 * 作者：颜晖
 * 单位：浙大城市学院
 * 题目要求：本题要求编写程序，计算华氏温度150°F对应的摄氏温度。
 * 计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
 * 输入格式：本题目没有输入。
 * 输出格式：按照下列格式输出。
 * fahr = 150, celsius = 计算所得摄氏温度的整数值
 */

#include <stdio.h>
int main(void){
    int fahr = 150;
    int celsius = (fahr - 32) * 5 / 9;
    printf("fahr = %d, celsius = %d" , fahr, celsius);
    return 0;
}