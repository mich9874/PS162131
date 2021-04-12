#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int pierwsza (unsigned int n)
{
    int pom;
    int tab[n];

    for(int i=0; i < n; i++)
        tab[i] = 1;

    for(int i=2; i < n; i++)
        if(tab[i] == 1) {
            pom=i;
            for(int j=2*i; j < n; j+=i)
                tab[j]=0;
        }
        return pom;
}
int main()
{
    printf("%d",pierwsza(5));
}
