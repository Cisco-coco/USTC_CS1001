#!/bin/bash
name=$(whoami)
osversion=$(uname -a)
subdir=$(ls)
content=$(cat show.sh)
tree=$(tree)
addr=$(hostname -I)
echo "My name is  ${name}"
echo "My OS version is  ${osversion}"
echo "I am in dir ${PWD}"
echo "Time is $(date)"
echo "IPv4 and IPv6 addr is ${addr}"
echo -e "There are ${subdir} files in this directory\n"
echo "Tree is ${tree}"
echo -e "Myself is ${content}"