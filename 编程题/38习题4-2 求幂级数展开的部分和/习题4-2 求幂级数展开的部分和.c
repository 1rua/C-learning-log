#include <stdio.h>
#include <math.h>
double ex(double x){
    int k = 0 , i;
    double ex = 0 , arr[1000];
    arr[0] = 1.0;
    for(i = 1 ; i < 1000 ; i++){
        arr[i] = arr[i-1] * i;
    }
    for (k = 0; ; k++) {
        double term = pow(x, k) / arr[k];
        ex = ex + term;
        if (term < 0.00001) break;
    }
    
    return ex;
}

int main(void){
    double x;
    scanf("%lf" , &x);
    printf("%.4f" , ex(x));
    return 0;
}
/* 习题4-2 求幂级数展开的部分和
分数 20
作者 C课程组
单位 浙江大学

已知函数ex可以展开为幂级数1+x+x2/2!+x3/3!+⋯+xk/k!+⋯。现给定一个实数x，要求利用此幂级数部分和求ex的近似值，求和一直继续到最后一项的绝对值小于0.00001。
输入格式:

输入在一行中给出一个实数x∈[0,5]。
输出格式:

在一行中输出满足条件的幂级数部分和，保留小数点后四位。
输入样例:
1.2
输出样例:
3.3201
 */