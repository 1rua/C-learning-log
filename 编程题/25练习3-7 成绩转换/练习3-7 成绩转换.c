/* 练习3-7 成绩转换
分数 15
作者 沈睿
单位 浙江大学

本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

    大于等于90分为A；
    小于90且大于等于80为B；
    小于80且大于等于70为C；
    小于70且大于等于60为D；
    小于60为E。

输入格式:

输入在一行中给出一个整数的百分制成绩。 
输出格式:

在一行中输出对应的五分制成绩。
输入样例:
90
输出样例:
A
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB */
#include <stdio.h>

int main(void) {
    int point;
    scanf("%d" , &point);
    if(point >= 90){
        printf("A");
    }
    else if(point < 90 && point >=80){
        printf("B");
    }
   else if(point < 80 && point >=70){
        printf("C");
    }
    else if(point < 70 && point >=60){
        printf("D");
    } 
    else{
        printf("E");
    }
    return 0;
}

