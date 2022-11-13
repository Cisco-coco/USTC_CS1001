#include <stdio.h>

#define R 3.0
#define PI 3.1415926
#define L 2*PI*R
#define BEGIN {
#define END }
#define FOREVER for(;;)

int main()
BEGIN       // {
    printf("L=%f\n", L);
#undef PI // undefine macro PI
    FOREVER; // for(;;);
    return 0;
END     // }