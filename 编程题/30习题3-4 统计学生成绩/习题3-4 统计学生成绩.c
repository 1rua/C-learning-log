/* 习题3-4 统计学生成绩
分数 15
作者 陈建海
单位 浙江大学

本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：

    大于等于90分为A；
    小于90且大于等于80为B；
    小于80且大于等于70为C；
    小于70且大于等于60为D；
    小于60为E。

输入格式:

输入在第一行中给出一个正整数N（≤1000），即学生人数；第二行中给出N个学生的百分制成绩，其间以空格分隔。 
输出格式:

在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。
输入样例:
7
77 54 92 73 60 65 69
输出样例:
1 0 2 3 1
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
    int n, a = 0, b = 0, c = 0, d = 0, e = 0, i;
    scanf("%d" , &n);
    int scores[1000];
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &scores[i]);
        if(scores[i] >= 90){
            a++;
        }
        else if(scores[i] < 90 && scores[i] >= 80){
            b++;
        }
        else if(scores[i] < 80 && scores[i] >= 70){
            c++;
        }
        else if(scores[i] < 70 && scores[i] >= 60){
            d++;
        }
        else if(scores[i] < 60 && scores[i] >= 0){
            e++;
        }
    }
    printf("%d %d %d %d %d" , a , b , c , d , e);
    return 0;
}

