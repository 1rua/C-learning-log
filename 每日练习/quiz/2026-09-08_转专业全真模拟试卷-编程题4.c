#include <stdio.h>
#include <math.h>
int main(void){
    char arr[1000];
    int i;
    for(i = 0 ; i < 1000 ; i++){
        scanf("%c" , &arr[i]);
    }
    for(i = 1000 ; i >= 0 ; i--){
        printf("%c" , arr[i]);
    }
    return 0;
}
/* ### 第 4 题：字符串单词倒排与双指针清洗（12分）

**【题目描述】**  
给定一个包含英文大小写字母和空格的字符串（长度不超过 1000）。要求编写程序，反转字符串中单词的顺序，但单词内部的字符顺序保持不变。同时要求：
1. 单词之间由一个空格隔开。
2. 结果首尾不能有任何多余的空格。
3. 多个连续的空格合并为一个空格。

**【输入格式】**  
输入在一行中给出一个非空字符串，可能包含首尾空格及连续空格。

**【输出格式】**  
输出倒排并清洗后的字符串。

**【输入样例】**
```text
  Hello   World   from   C  Language  
```

**【输出样例】**
```text
Language C from World Hello
```
 */