/*
 * 练习2-12 输出华氏-摄氏温度转换表
 * 分数：15
 * 作者：C课程组
 * 单位：浙江大学
 * 题目要求：输入2个正整数lower和upper（lower≤upper≤100），请输出一张取值范围为[lower，upper]、且每次增加2华氏度的华氏-摄氏温度转换表。
 * 温度转换的计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，F表示华氏温度。
 * 输入格式：在一行中输入2个整数，用空格分开，分别表示lower和upper的值。
 * 输出格式：第一行输出"fahr celsius"，接着每行输出一个华氏温度fahr（整型）与一个对应的摄氏温度celsius（占据6个字符宽度，靠右对齐，保留1位小数）。
 * 若输入的范围不合法，则输出"Invalid."。
 */

#include <stdio.h>
int main(void){
    int lower , upper , fahr;
    double celsius;
    scanf("%d %d" , &lower , &upper);
    if(lower <= upper  && upper <= 100){
        printf("fahr celsius\n");
        for(fahr = lower ; fahr <= upper ; fahr += 2){
            
            celsius = (fahr - 32) * 5.0 / 9.0;
            printf("%d%6.1f\n" , fahr , celsius); 
        }
        
    }
    else{
        printf("Invalid.\n");
    }
    
    return 0;
}