Author: 许嘉诚  
Date Last Edited: 19/10/2022  
Recitation For USTC CS1001B  

- [Basic Tools](#basic-tools)
  - [GitHub](#github)
  - [linux](#linux)
  - [shell](#shell)
  - [vlab](#vlab)
- [Compile tools](#compile-tools)
  - [gcc](#gcc)
  - [make](#make)
  - [cmake](#cmake)
- [Editors or IDEs](#editors-or-ides)
  - [Vim](#vim)
  - [vscode](#vscode)
  - [vs studio](#vs-studio)
  - [JetBrains](#jetbrains)
  - [copilot](#copilot)
- [Programming Languages](#programming-languages)
  - [c++](#c)
  - [python](#python)
  - [matlab](#matlab)
  - [others](#others)
- [Markup Languages](#markup-languages)
  - [HTML](#html)
  - [Markdown](#markdown)
  - [Latex](#latex)

# Basic Tools
## [GitHub](https://github.com)
Open source community maintained by Miscrosoft.  
[GitLab of USTC](https://git.ustc.edu.cn/)  
[Gitee](https://gitee.com/) is a substitue of GitHub.    

## linux
Linux is not Unix.  
Linux is open-source and free.  
[Linux 101](https://101.lug.ustc.edu.cn/)  

## shell
| | |
| -- |-- |
| `pwd` | 列出当前路径 |
| `ls` | 列出当前路径下文件及文件夹 |
| `cd subdir` | 跳转到子文件夹 |
| `cat filename`| 打印文件内容 |
| `touch filename` | 创建一个文件 |
| `mkdir subdir` | 创建一个文件夹 |
| `mv filenam1 filename2` | 重命名 |
| `rm filename` | 删除一个文件 |
| `rm -r subdir` | 删除一个文件夹及其所有文件 |
| `tree subdir` | 以树的形式打印目录结构 |
若提示没有安装`tree`，输入如下命令即可安装

```shell
sudo apt-get update
sudo apt-get install tree
```

<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

## [vlab](https://vlab.ustc.edu.cn)

# Compile tools
## gcc
A quick birdview.

## make
Useful and efficient.

## cmake
A quick birdview.

# Editors or IDEs
## Vim
Vim：编辑器之神  
分为两种模式：命令模式（默认）和编辑模式，`ESC`可以由编辑模式切换到命令模式，`i`（在当前光标处插入）可以由命令模式切换到编辑模式，类似的还有`a`（在光标后插入）,`o`（在下一行插入）等。  
| 命令 | 操作 |
| -- | --|
| ^ | 移动光标到行首 |
| $ | 移动光标到行尾 |
| gg | 移动光标到文件头 |
| G | 移动光标到文件尾 |
| W | 移动光标到下一个单词 |
| B | 移动光标到前一个单词 |
| dd | 删除光标所在行 |
| yy | 复制光标所在行 |
| P | 粘贴最近一次复制的内容 |
| u | 撤销上一次操作 |
| CTRL + R | 重做被撤销的操作 |
| :/string | 向前搜索字符串 string |
| :?string | 向后搜索字符串 string |
| :w | 保存文件 |
| :w filename | 另存为 filename |
| :wq | 保存并退出文件 |


> Emacs：神的编辑器

## [vscode](https://code.visualstudio.com/)
The most powerful editor in the world.Also seen in vlab.

## [vs studio](https://visualstudio.microsoft.com/zh-hans/vs/)
The most powerful IDE in the world but no one use it.


## [JetBrains](https://www.jetbrains.com/)
PyCharm, CLion and so on.  
学生可以免费申请职业版。

## copilot
An AI-powered pair programmer.  
学生可以申请[GitHub Golbal Campus](https://education.github.com/globalcampus/student)  
Privacy or efficiency?

# Programming Languages
## c++
c++ features in OOP and STL.  
OOP is object oriented programming. Specifically is class.  


## python
Python features in third-party libs.  
Standard Libs: math, random, time, pickle, os, re, collections, threading, multiprocessing, turtle.  
Data analysis and visualization：Numpy, Matpotlib, Pandas, Scipy, worldcloud, jieba.  
Machine Learning and Deep Learning: Tensorflow, Keras, sklearn Caffe, Pytorch.  
Image Processing: Pillow, Opencv  
Others: Requests, IPython.  
See more in [Awesome Python](https://github.com/vinta/awesome-python)  
[中国大学Mooc Python语言程序设计](https://www.icourse163.org/course/BIT-268001?tid=1467117627#/learn/announce)  
[UC Berkeley cs61a](https://cs61a.org/)  


## matlab
[Install](https://zbh.ustc.edu.cn/zbh.php) for free.  

## others
Java R Go Rust  ...

# Markup Languages
## HTML
A homepage [example](https://sx4.oyyandwjw.cn/).  
An academic homepage by Professor [Xuejin Chen](http://staff.ustc.edu.cn/~xjchen99).  
A trick: *view-source:URL*  
[USTC HomePage](http://home.ustc.edu.cn)  
[Github HomePage](https://pages.github.com/)  

## Markdown
[USTC 评课社区](https://icourse.club/)，CSDN，简书，知乎等平台均支持Markdown语法。  
[Markdown tutorial](https://markdown.com.cn/)  
[Markdown语法说明及测试一览表](https://www.cnblogs.com/Sky-seeker/p/13038909.html)  
[Typora](https://typoraio.cn/) also seen in vlab.  
Online markdown editor [StackEdit](https://stackedit.cn/)  

## Latex
Heavy use of math formula.  
Latex User QQ Group: 1009360818  
Online editor: [Overleaf](https://www.overleaf.com/)  
Online formula editor: [latexlive](https://www.latexlive.com/)  
Convert images and PDFs to LaTeX: [Mathpix](https://mathpix.com/)  