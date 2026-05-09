#include <stdio.h>

int main() {
    double x, result;
    
    // 读取输入
    scanf("%lf", &x);
    
    // 计算分段函数
    if (x == 0) {
        result = 0;
    } else {
        result = 1.0 / x;
    }
    
    // 输出结果，保留一位小数
    printf("f(%.1f) = %.1f\n", x, result);
    
    return 0;
}
