#include <stdio.h>
#include <stdlib.h>
int main( )
{
int a, b;

scanf("%d\n%d", &a, &b);
  while(a!=b)
    if(a<b)
    {
      b-=a;
    }
    else
    {
      a-=b;
    }
printf("%d",a);
  return 0;
}
