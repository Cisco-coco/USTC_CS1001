#!/bin/bash
# use chmod +x hello.sh to make it executable
# run it with ./hello.sh

# 预处理
echo "预处理"
gcc -E hello.c -o hello.i

# 编译
echo "编译"
gcc -S hello.i -o hello.s

# 汇编
echo "汇编"
gcc -c hello.s -o hello.o

# 链接
echo "链接"
gcc hello.o -o hello

# 或者直接build
echo "直接build"
gcc hello.c -o hello