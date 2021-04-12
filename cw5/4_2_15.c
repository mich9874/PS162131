#include <stdio.h>
#include <stdlib.h>


void zwolnij (int* tab)
{
	free (tab);
}

int main ()
{
	int* tab[]={5};
	zwolnij(tab);
    printf ("%p\n",tab);
	return 0;
}
