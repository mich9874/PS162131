#include <stdio.h>
#include <stdlib.h>
int x()
{
    static int a=0;
    a++;
    printf("wywolanie: %d\n",a);
}
int main()
{
    x();
    x();
    x();
    x();
    x();
    x();
return 0;
}
