/*
 * 练习2-8 计算摄氏温度
 * 分数：10
 * 作者：陈建海
 * 单位：浙江大学
 * 题目要求：本题要求编写程序，计算华氏温度对应的摄氏温度。
 * 计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，F表示华氏温度。
 * 输入格式：输入在一行中给出一个华氏温度。
 * 输出格式：在一行中按照格式"Celsius = C"输出对应的摄氏温度C的整数值。
 */

#include <stdio.h>
int main(void){
    int fahr;
    printf("�����뻪�϶ȣ�");
    scanf("%d", &fahr);
    int celsius = (fahr - 32) * 5 / 9;
    printf("Celsius = %d\n" , celsius);
    return 0;
}