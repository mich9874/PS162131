#include <stdio.h>
#include <stdlib.h>
int silnia(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return n*silnia(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",silnia(n));
    return 0;
}
