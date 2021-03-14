#include <stdio.h>

int potega (int n)
{
	int wynik=1;
    for(int i=0;i<n;i++)
	{
		wynik=wynik*2;
	}
	return wynik;
}

int main()
{
	int n;
    scanf("%i",&n);
    printf ("%i \n", potega(n));
    return 0;
}
