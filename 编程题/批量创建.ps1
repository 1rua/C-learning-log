# 设置基础路径
$basePath = "f:\27522\OneDrive\文档\projects\C语言练习\编程题"

# 定义题目列表（序号, 题目编号, 题目标题）
$problems = @(
    @(24, "练习3-5", "输出闰年"),
    @(25, "练习3-7", "成绩转换"),
    @(26, "练习3-8", "查询水果价格"),
    @(27, "习题3-1", "比较大小"),
    @(28, "习题3-2", "高速公路超速处罚"),
    @(29, "习题3-3", "出租车计价"),
    @(30, "习题3-4", "统计学生成绩"),
    @(31, "习题3-5", "三角形判断"),
    @(32, "练习4-3", "求给定精度的简单交错序列部分和"),
    @(33, "练习4-6", "猜数字游戏"),
    @(34, "练习4-7", "求e的近似值"),
    @(35, "练习4-10", "找出最小值"),
    @(36, "练习4-11", "统计素数并求和"),
    @(37, "习题4-1", "求奇数和"),
    @(38, "习题4-2", "求幂级数展开的部分和"),
    @(39, "习题4-3", "求分数序列前N项和"),
    @(40, "习题4-4", "特殊a串数列求和"),
    @(41, "习题4-5", "换硬币"),
    @(42, "习题4-6", "水仙花数"),
    @(43, "习题4-7", "最大公约数和最小公倍数"),
    @(44, "习题4-8", "高空坠球"),
    @(45, "习题4-9", "打印菱形图案"),
    @(46, "习题4-10", "猴子吃桃问题"),
    @(47, "习题4-11", "兔子繁衍问题"),
    @(48, "练习6-3", "英文字母替换加密（大小写转换+后移1位）"),
    @(49, "习题6-7", "简单计算器"),
    @(50, "习题6-8", "单词首字母大写"),
    @(51, "练习7-2", "求最大值及其下标"),
    @(52, "练习7-3", "将数组中的数逆序存放"),
    @(53, "练习7-4", "找出不是两个数组共有的元素"),
    @(54, "练习7-7", "矩阵运算"),
    @(55, "练习7-8", "方阵循环右移"),
    @(56, "练习7-9", "计算天数"),
    @(57, "练习7-10", "查找指定字符"),
    @(58, "练习7-11", "字符串逆序"),
    @(59, "习题7-1", "选择法排序"),
    @(60, "习题7-2", "求一批整数中出现最多的个位数字"),
    @(61, "习题7-3", "判断上三角矩阵"),
    @(62, "习题7-4", "求矩阵各行元素之和"),
    @(63, "习题7-5", "找鞍点"),
    @(64, "习题7-6", "统计大写辅音字母"),
    @(65, "习题7-7", "字符串替换"),
    @(66, "习题7-8", "字符串转换成十进制整数"),
    @(67, "习题8-7", "字符串排序"),
    @(68, "习题8-10", "输出学生成绩"),
    @(69, "习题9-1", "时间换算"),
    @(70, "习题9-3", "平面向量加法"),
    @(71, "习题9-4", "查找书籍"),
    @(72, "习题9-5", "通讯录排序")
)

# C文件模板
$template = @"#include <stdio.h>

int main(void) {

    return 0;
}
"@

# 统计
$createdFolders = 0
$createdFiles = 0
$skippedFolders = 0
$skippedFiles = 0

Write-Host "开始批量创建文件夹和C文件..." -ForegroundColor Green
Write-Host ""

foreach ($problem in $problems) {
    $seq = $problem[0]
    $id = $problem[1]
    $title = $problem[2]

    # 文件夹名称：序号 + 题目编号 + 题目标题
    $folderName = "$seq$id $title"
    $folderPath = Join-Path $basePath $folderName

    # 文件名称：题目编号 + 题目标题 + .c
    $fileName = "$id $title.c"
    $filePath = Join-Path $folderPath $fileName

    # 创建文件夹（如果不存在）
    if (-not (Test-Path $folderPath)) {
        New-Item -ItemType Directory -Path $folderPath -Force | Out-Null
        Write-Host "[创建] 文件夹: $folderName" -ForegroundColor Cyan
        $createdFolders++
    } else {
        Write-Host "[跳过] 文件夹已存在: $folderName" -ForegroundColor Yellow
        $skippedFolders++
    }

    # 创建C文件（如果不存在）
    if (-not (Test-Path $filePath)) {
        Set-Content -Path $filePath -Value $template -Encoding UTF8
        Write-Host "[创建] 文件: $fileName" -ForegroundColor Green
        $createdFiles++
    } else {
        Write-Host "[跳过] 文件已存在: $fileName" -ForegroundColor Yellow
        $skippedFiles++
    }
}

Write-Host ""
Write-Host "========================================" -ForegroundColor Magenta
Write-Host "创建完成！" -ForegroundColor Magenta
Write-Host "========================================" -ForegroundColor Magenta
Write-Host "新建文件夹: $createdFolders 个" -ForegroundColor Cyan
Write-Host "新建C文件:  $createdFiles 个" -ForegroundColor Green
Write-Host "跳过文件夹: $skippedFolders 个" -ForegroundColor Yellow
Write-Host "跳过C文件:  $skippedFiles 个" -ForegroundColor Yellow
Write-Host ""

# 列出所有创建的文件夹和文件
Write-Host "目录结构列表:" -ForegroundColor Magenta
Write-Host "----------------------------------------" -ForegroundColor Magenta

foreach ($problem in $problems) {
    $seq = $problem[0]
    $id = $problem[1]
    $title = $problem[2]
    $folderName = "$seq$id $title"
    $fileName = "$id $title.c"

    Write-Host "$folderName/" -ForegroundColor Cyan -NoNewline
    Write-Host " -> " -NoNewline
    Write-Host "$fileName" -ForegroundColor Green
}
