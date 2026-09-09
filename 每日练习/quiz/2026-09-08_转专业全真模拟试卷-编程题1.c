#include <stdio.h>
#include <math.h>
int main(void){
    int s = 0 , n , i;
    scanf("%d" , &n);
    for(i = 1 ; i < n ; i++){
        s = s + (pow(-1 , n-1) * n / (2*n - 1));
}
    printf("%d" , s);
    return 0;
}
/* ### 第 1 题：求交错序列前 N 项和（8分）

**【题目描述】**  
本题要求编写程序，计算交错序列：
$$S = 1 - \frac{2}{3} + \frac{3}{5} - \frac{4}{7} + \frac{5}{9} - \frac{6}{11} + \dots$$
的前 $N$ 项之和。

**【输入格式】**  
输入在一行中给出一个正整数 $N$（$1 \le N \le 1000$）。

**【输出格式】**  
在一行中输出部分和的值，结果保留三位小数。

**【输入样例】**
```text
5
``` */