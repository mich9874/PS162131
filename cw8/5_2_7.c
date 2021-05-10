#include <stdio.h>


void sklej ( char* tab1, char* tab2, char* tab3 )
{
    int i;
	for (i=0; tab1[i]!=0; i++)
	{
		tab3[i]=tab1[i];
	}
	for (int j=0; tab2[j]!=0;j++)
	{
		tab3[i]=tab2[j];
		i++;
	}
	tab3[i] = 0;
}
int main()
{
	char tab1 [] = "Ala m";
	char tab2 [] = "a kota";
	char tab3 [ 12 ];
	sklej ( tab1, tab2, tab3 );
	printf ( "%s \n", tab3 );
	return 0;
}
