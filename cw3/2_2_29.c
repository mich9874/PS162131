#include <stdio.h>
#include <stdlib.h>

int x(int a, int b)
{
while(a!=b)
    {
        if(a>b)
            {
            a-=b;
            }
        else
            {
            b-=a;
            }
    }
return a;
}

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d\n",x(a,b));
    return 0;
}

