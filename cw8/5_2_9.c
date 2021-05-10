#include <stdio.h>
#include <stdlib.h>

void wytnij(char *nap, int n, int m)
{
    int i, dl;
    for(dl=0;nap[dl]!=0;dl++);
    if(dl+1>m)
    {
        for(i=0;i+m<dl;i++)
            nap[n+i]=nap[i+m+1];
    }
    else
        if ((n<dl)&&(dl+1<m))
        nap[n]=0;
}
int main()
{
    char napis[] = "napis";
    printf("%s", napis);
    wytnij(napis, 1,2);
    printf("%s", napis);
    return 0;
}
