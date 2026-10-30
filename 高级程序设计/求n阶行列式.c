#include <stdio.h>

#define MAX 10

// 提取余子式矩阵：划去 mat 的第 0 行和第 p 列，生成 (n-1) 阶子矩阵 subMat
void getCofactor(double mat[MAX][MAX], double subMat[MAX][MAX], int p, int n) {
    int sub_i = 0, sub_j = 0;

    // 从原矩阵第 1 行开始遍历（因为按第 0 行展开，第 0 行被划去）
    for (int row = 1; row < n; row++) {
        sub_j = 0;
        for (int col = 0; col < n; col++) {
            // 跳过被划去的列
            if (col == p) {
                continue;
            }
            subMat[sub_i][sub_j] = mat[row][col];
            sub_j++;
        }
        sub_i++;
    }
}

// 递归计算 n 阶行列式的值
double determinant(double mat[MAX][MAX], int n) {
    // 递归终止条件（递归基）
    if (n == 1) {
        return mat[0][0];
    }
    if (n == 2) {
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }

    double det = 0.0;
    double subMat[MAX][MAX];
    int sign = 1; // 符号位：正、负交替 (+1, -1, +1, -1...)

    // 按第 0 行展开：det = sum( (-1)^j * a[0][j] * M[0][j] )
    for (int j = 0; j < n; j++) {
        // 获取去掉第 0 行、第 j 列后的 (n-1) 阶子矩阵
        getCofactor(mat, subMat, j, n);
        
        // 累加项：符号 * 当前元素 * 余子式行列式值
        det += sign * mat[0][j] * determinant(subMat, n - 1);

        // 下一项符号翻转
        sign = -sign;
    }

    return det;
}

int main(void) {
    int n;
    double mat[MAX][MAX];

    printf("请输入行列式的阶数 n (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("输入的阶数不合法！\n");
        return 1;
    }

    printf("请输入 %d x %d 矩阵的所有元素（按行输入）：\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    double result = determinant(mat, n);

    printf("\n行列式的值为: %.2f\n", result);

    return 0;
}