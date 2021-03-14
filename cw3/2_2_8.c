#include <stdio.h>
#include <stdlib.h>

int x(int n)
{
int wynik=0;
for(int i=0;i*i<=n;i++)
    {
    wynik=i;
    }
return wynik;
}

int main()
{
    printf("%d\n",x(16));
    return 0;
}
