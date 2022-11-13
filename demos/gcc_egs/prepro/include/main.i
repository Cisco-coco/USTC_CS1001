# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "main.c"
# 1 "max.c" 1
int max(int a, int b){
    return a > b ? a : b;
}
# 2 "main.c" 2


int main(){
    int a = 10;
    int b = 20;
    int c = max(a,b);
}
