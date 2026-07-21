/* 习题3-5 三角形判断
分数 15
作者 杨起帆
单位 浙江大学

给定平面上任意三个点的坐标(x1​,y1​)、(x2​,y2​)、(x3​,y3​)，检验它们能否构成三角形。
输入格式:

输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标x1​、y1​、x2​、y2​、x3​、y3​。 
输出格式:

若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。
输入样例1:
4 5 6 9 7 8
输出样例1:
L = 10.13, A = 3.00
输入样例2:
4 6 8 12 12 18
输出样例2:
Impossible
代码长度限制
16 KB
时间限制
200 ms
内存限制
64 MB
栈限制
8192 KB */
#include <stdio.h>
#include <math.h>

int main(void) {
    double x1 , y1 , x2 , y2 , x3 , y3;
    scanf("%lf %lf %lf %lf %lf %lf" , &x1 , &y1 , &x2 , &y2 , &x3 , &y3);
    double L , A , P , a , b , c ;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
  
    if(a + b > c && a + c > b && b + c > a){
        L = a + b + c;
        P = L / 2.0;
        A = sqrt(P*(P-a)*(P-b)*(P-c));
        printf("L = %.2f, A = %.2f" , L , A);
    }
    else{
        printf("Impossible");
    }
    return 0;
}

