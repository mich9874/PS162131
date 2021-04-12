#include <stdio.h>

void przypisywanie (int n, int tab1[n], int tab2[n], int tab3[n])
{

	for (int i=0; i< n; i++)
	{
		tab3[i]=tab1[i]+tab2[i];
	}
}

void wiekszy (int n, int tab1[n], int tab2[n], int tab3[n])
{
	for (int i=0; i<n; i++)
	{
		if (tab1[i]<tab2[i])
		{
			tab3[i]=tab2[i];
		}
		else
		{
			tab3[i]=tab1[i];
		}
	}
}

void zamiana (int n, int tab1[n], int tab2[n], int tab3[n])
{
	int tmp;

	for (int i=0; i<n; i++)
	{
		tmp=tab2[i];
		tab2[i]=tab1[i];
		tab1[i]=tab3[i];
		tab3[i]=tmp;
	}
}

void wyswietl(int n, int tab[n])
{
	for (int i=0;i<n;i++)
	{
		printf ("%i",tab[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	scanf ("%i",&n);
	int tab1[n];
	int tab2[n];
	int tab3[n];

	for (int i=0;i<n;i++)
	{
		scanf ("%i",&tab1[i]);
	}

	for (int i=0;i<n;i++)
	{
		scanf ("%i", &tab2[i]);
	}

	for (int i=0;i<n;i++)
	{
		scanf("%i", &tab3[i]);
	}

	wyswietl(n,tab1);
	wyswietl(n,tab2);
	wyswietl(n,tab3);
	zamiana(n,tab1,tab2,tab3 );
	wyswietl(n,tab1);
	wyswietl(n,tab2);
	wyswietl(n,tab3);

	return 0;
}
