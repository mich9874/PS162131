#include <stdio.h>
int x (int n)
{
	if(n<2)
	{
		return 1;
	}
	int suma=0;

	for (int i=0;i<n;i++)
	{
		suma=suma+x(i);
	}
	return suma;
}

int main()
{
	int i;
	scanf ("%i",&i);
	printf ("%i\n",x(i));
	return 0;
}
