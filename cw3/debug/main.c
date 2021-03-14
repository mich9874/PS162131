#include <stdio.h>
#include <stdlib.h>

int main()
{
//wpisz wartosci zmiennych po wykonaniu danej linijki kodu
int a = 162131; //tu wpisz swoj numer indeksu
int b=a%12;
int c=b%7;
int d= (b+=4)-(c*=2); // b=15  , c=8  , d=7
c=(d^=2); // b=15  , c=5  , d=5
d=(b/=4)*(c-=3); // b=3  , c=2  , d=6

return 0;
}
