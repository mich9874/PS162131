#include <stdio.h>
#include <stdlib.h>


void tabA(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] = 0;
}

void tabB(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] = i;
}

void tabC(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] *= 2;
}

void tabD(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0)
            tab[i] *= -1;
    }
}

int main() {
    int tab[3] = {3,2,-1};

    printf("D: ");
    tabD(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nA: ");
    tabA(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nB: ");
    tabB(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nC: ");
    tabC(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    return 0;
}
