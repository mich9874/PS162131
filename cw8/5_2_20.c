#include <stdio.h>
#include <stdlib.h>

char* godzina ( int godz, int min, int sek )
{
char *wyn=malloc(9*sizeof(char));
sprintf(wyn,"%02d:%02d:%02d",godz,min,sek);
return wyn;
}
int main ()
{
	printf ("%s\n", godzina(19,21,30));
	printf ("%s\n", godzina(3,4,15));
	printf ("%s\n", godzina(00,39,6));
	return 0;
}
