#include <stdio.h>
#include <stdlib.h>

void foo(int *n, int *m)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
int main()
{
    int x=5, y=6;
    printf("%d %d\n",x,y);
    foo(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
