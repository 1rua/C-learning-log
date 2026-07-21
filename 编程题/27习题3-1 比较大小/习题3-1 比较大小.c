/* 习题3-1 比较大小
分数 10
作者 杨起帆
单位 浙大城市学院

本题要求将输入的任意3个整数从小到大输出。
输入格式:

输入在一行中给出3个整数，其间以空格分隔。
输出格式:

在一行中将3个整数从小到大输出，其间以“->”相连。 
输入样例:
4 2 8
输出样例:
2->4->8
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
    int i , z;
    int arr[3];
    scanf("%d" , &arr[i]);
    for(i = 0 ; i < 2 ; i++){
        
        if(arr[i] > arr[i+1]){
            z = arr[i];
            arr[i] = arr[i+1];
            arr[i] = z;
        }
    printf("%d->" , arr[i]);

    }

    return 0;
}

