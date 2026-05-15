/* 练习3-3 统计学生平均成绩与及格人数
分数 15
作者 C课程组
单位 浙江大学

本题要求编写程序，计算学生们的平均成绩，并统计及格（成绩不低于60分）的人数。题目保证输入与输出均在整型范围内。
输入格式:

输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。 
输出格式:

按照以下格式输出：
average = 成绩均值
count = 及格人数

其中平均值精确到小数点后一位。 
输入样例:
5
77 54 92 73 60
输出样例:
average = 71.2
count = 4
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */
#include <stdio.h>
int main(void){
    int n , i , N[10000] , count = 0;
    double avg = 0.0;
    scanf("%d" , &n);
    if(n > 0){
        for(i = 0 ; i < n ; i++){
        scanf("%d" , &N[i]);
        }
        for(i = 0 ; i < n ; i++){
            avg += N[i];
            if(N[i] >= 60){
                count += 1;
            }
        }
        printf("average = %.1f\ncount = %d" , avg / n , count);
    }
    else{
        printf("average = 0.0\ncount = 0");
    }
    return 0;
}