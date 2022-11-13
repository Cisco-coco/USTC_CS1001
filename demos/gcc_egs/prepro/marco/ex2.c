#include <stdio.h>
#define S1(a,b) a*b
#define S2(a,b) ((a)*(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
    int x=3, y=4, i=5, j=6, s, z;

    s = S1(x+y, x-y);   // s = x+y*x-y;
    s = S2(x+y, x-y);   // s = ((x+y)*(x-y));
    z = MAX(i++, j++);  // z = ((i++)>(j++)?(i++):(j++));

    return 0;
}
