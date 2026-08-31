#!/usr/bin/env bash
# ============================================================
# C 语言学习项目 — 一键清理编译产物脚本
# 用法: bash clean.sh
# ============================================================

set -euo pipefail

PROJECT_DIR="$(cd "$(dirname "$0")" && pwd)"

echo "=========================================="
echo "  清理 C 语言编译产物"
echo "  项目路径: $PROJECT_DIR"
echo "=========================================="

# 定义需要清理的编译产物后缀
PATTERNS=(
    "*.o"       # 目标文件
    "*.out"     # 编译输出可执行文件
    "*.exe"     # Windows 可执行文件
    "*.so"      # 共享库
    "*.a"       # 静态库
    "*.dylib"   # macOS 动态库
    "a.out"     # 默认可执行文件
)

# 统计变量
total_deleted=0

for pattern in "${PATTERNS[@]}"; do
    echo ""
    echo "查找 $pattern ..."
    # 使用 find 递归查找匹配的文件
    mapfile -t files < <(find "$PROJECT_DIR" -type f -name "$pattern" 2>/dev/null || true)

    if [ ${#files[@]} -eq 0 ]; then
        echo "  (未找到)"
        continue
    fi

    for f in "${files[@]}"; do
        echo "  删除: ${f#$PROJECT_DIR/}"
        rm -f "$f"
        total_deleted=$((total_deleted + 1))
    done
done

echo ""
echo "=========================================="
if [ $total_deleted -eq 0 ]; then
    echo "  没有需要清理的编译产物，项目很干净！"
else
    echo "  清理完成！共删除 $total_deleted 个文件。"
fi
echo "=========================================="