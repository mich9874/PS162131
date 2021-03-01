#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,m,i,w=1;
scanf("%d\n%d", &n, &m);

for (i = n; i <= m; i++) {
    w = w*i;
}
printf("%d", w);
return 0;
}
