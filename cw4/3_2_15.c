#include <stdio.h>
#include <stdlib.h>

void foo(int const *a, int*b)
{
    *b=*a;
}
int main()
{
    int x=5, y=9;
    foo(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
