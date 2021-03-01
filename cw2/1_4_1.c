#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,m,c;
scanf("%d\n%d", &n, &m);
c = n;

while (c < m) {
    printf("%d\ ", c);
    c += n;
}

return 0;
}
