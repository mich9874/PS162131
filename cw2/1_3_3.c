#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b)
    {
        if(c>=a)
        {
            printf("%d",c);
        }
        else
        {
            printf("%d",a);
        }
    }
    else
    {
        if(c>=b)
        {
            printf("%d",c);
        }
        else
        {
            printf("%d",b);
        }
    }
    return 0;
}
