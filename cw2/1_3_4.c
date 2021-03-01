#include <stdio.h>

int main()
{
	int x,y;
	int bx, by;
	scanf ("%d%d",&x,&y);
	bx=x;
	if (x<0)
	{
		bx=-x;
	}
	by=y;
	if(y<0)
	{
		by=-y;
	}
	if(bx>by)
	{
		printf ("%d\n",x);
	}
	else
	{
		printf ("%d\n",y);
	}
	return 0;
}
