#include <stdio.h>
#include <stdlib.h>

int* foo(unsigned int n)
{
    return malloc(n*sizeof(int));
}
int main() {
    int n=3;
    printf("%d\n",foo(&n));
    return 0;
}
