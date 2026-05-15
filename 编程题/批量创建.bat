@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

set "basePath=f:\27522\OneDrive\文档\projects\C语言练习\编程题"

echo 开始批量创建文件夹和C文件...
echo.

set createdFolders=0
set createdFiles=0
set skippedFolders=0
set skippedFiles=0

call :createFolder "24练习3-5 输出闰年" "练习3-5 输出闰年"
call :createFolder "25练习3-7 成绩转换" "练习3-7 成绩转换"
call :createFolder "26练习3-8 查询水果价格" "练习3-8 查询水果价格"
call :createFolder "27习题3-1 比较大小" "习题3-1 比较大小"
call :createFolder "28习题3-2 高速公路超速处罚" "习题3-2 高速公路超速处罚"
call :createFolder "29习题3-3 出租车计价" "习题3-3 出租车计价"
call :createFolder "30习题3-4 统计学生成绩" "习题3-4 统计学生成绩"
call :createFolder "31习题3-5 三角形判断" "习题3-5 三角形判断"
call :createFolder "32练习4-3 求给定精度的简单交错序列部分和" "练习4-3 求给定精度的简单交错序列部分和"
call :createFolder "33练习4-6 猜数字游戏" "练习4-6 猜数字游戏"
call :createFolder "34练习4-7 求e的近似值" "练习4-7 求e的近似值"
call :createFolder "35练习4-10 找出最小值" "练习4-10 找出最小值"
call :createFolder "36练习4-11 统计素数并求和" "练习4-11 统计素数并求和"
call :createFolder "37习题4-1 求奇数和" "习题4-1 求奇数和"
call :createFolder "38习题4-2 求幂级数展开的部分和" "习题4-2 求幂级数展开的部分和"
call :createFolder "39习题4-3 求分数序列前N项和" "习题4-3 求分数序列前N项和"
call :createFolder "40习题4-4 特殊a串数列求和" "习题4-4 特殊a串数列求和"
call :createFolder "41习题4-5 换硬币" "习题4-5 换硬币"
call :createFolder "42习题4-6 水仙花数" "习题4-6 水仙花数"
call :createFolder "43习题4-7 最大公约数和最小公倍数" "习题4-7 最大公约数和最小公倍数"
call :createFolder "44习题4-8 高空坠球" "习题4-8 高空坠球"
call :createFolder "45习题4-9 打印菱形图案" "习题4-9 打印菱形图案"
call :createFolder "46习题4-10 猴子吃桃问题" "习题4-10 猴子吃桃问题"
call :createFolder "47习题4-11 兔子繁衍问题" "习题4-11 兔子繁衍问题"
call :createFolder "48练习6-3 英文字母替换加密（大小写转换+后移1位）" "练习6-3 英文字母替换加密（大小写转换+后移1位）"
call :createFolder "49习题6-7 简单计算器" "习题6-7 简单计算器"
call :createFolder "50习题6-8 单词首字母大写" "习题6-8 单词首字母大写"
call :createFolder "51练习7-2 求最大值及其下标" "练习7-2 求最大值及其下标"
call :createFolder "52练习7-3 将数组中的数逆序存放" "练习7-3 将数组中的数逆序存放"
call :createFolder "53练习7-4 找出不是两个数组共有的元素" "练习7-4 找出不是两个数组共有的元素"
call :createFolder "54练习7-7 矩阵运算" "练习7-7 矩阵运算"
call :createFolder "55练习7-8 方阵循环右移" "练习7-8 方阵循环右移"
call :createFolder "56练习7-9 计算天数" "练习7-9 计算天数"
call :createFolder "57练习7-10 查找指定字符" "练习7-10 查找指定字符"
call :createFolder "58练习7-11 字符串逆序" "练习7-11 字符串逆序"
call :createFolder "59习题7-1 选择法排序" "习题7-1 选择法排序"
call :createFolder "60习题7-2 求一批整数中出现最多的个位数字" "习题7-2 求一批整数中出现最多的个位数字"
call :createFolder "61习题7-3 判断上三角矩阵" "习题7-3 判断上三角矩阵"
call :createFolder "62习题7-4 求矩阵各行元素之和" "习题7-4 求矩阵各行元素之和"
call :createFolder "63习题7-5 找鞍点" "习题7-5 找鞍点"
call :createFolder "64习题7-6 统计大写辅音字母" "习题7-6 统计大写辅音字母"
call :createFolder "65习题7-7 字符串替换" "习题7-7 字符串替换"
call :createFolder "66习题7-8 字符串转换成十进制整数" "习题7-8 字符串转换成十进制整数"
call :createFolder "67习题8-7 字符串排序" "习题8-7 字符串排序"
call :createFolder "68习题8-10 输出学生成绩" "习题8-10 输出学生成绩"
call :createFolder "69习题9-1 时间换算" "习题9-1 时间换算"
call :createFolder "70习题9-3 平面向量加法" "习题9-3 平面向量加法"
call :createFolder "71习题9-4 查找书籍" "习题9-4 查找书籍"
call :createFolder "72习题9-5 通讯录排序" "习题9-5 通讯录排序"

echo.
echo ========================================
echo 创建完成！
echo ========================================
echo 新建文件夹: %createdFolders% 个
echo 新建C文件:  %createdFiles% 个
echo 跳过文件夹: %skippedFolders% 个
echo 跳过C文件:  %skippedFiles% 个
echo.
echo 按任意键退出...
pause >nul
exit /b

:createFolder
set "folderName=%~1"
set "fileName=%~2.c"
set "folderPath=%basePath%\%folderName%"
set "filePath=%folderPath%\%fileName%"

if not exist "%folderPath%" (
    mkdir "%folderPath%"
    echo [创建] 文件夹: %folderName%
    set /a createdFolders+=1
) else (
    echo [跳过] 文件夹已存在: %folderName%
    set /a skippedFolders+=1
)

if not exist "%filePath%" (
    (
        echo #include ^<stdio.h^>
        echo.
        echo int main^(void^) {
        echo.
        echo     return 0;
        echo }
    ) > "%filePath%"
    echo [创建] 文件: %fileName%
    set /a createdFiles+=1
) else (
    echo [跳过] 文件已存在: %fileName%
    set /a skippedFiles+=1
)
exit /b
