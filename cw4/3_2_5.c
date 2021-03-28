#include <stdio.h>
#include <stdlib.h>

int suma(int const*a, int const*b)
{
    return *a+*b;
}
int main()
{
    int x=5, y=9;
    printf("%d",suma(&x,&y));
    return 0;
}
