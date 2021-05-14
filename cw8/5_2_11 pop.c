#include <stdio.h>
#include <stdlib.h>

void wytnijzw1(char *nap1, char *nap2) {
    int n = 0, w = 0;

    for (int i = 0; nap1[i] != '\0'; i++) {
        for (int j = 0; nap2[j] != '\0'; j++) {
            if (nap1[i] == nap2[j]) {
                w += 1;
            }
        }

        if (w == 0) {
            nap1[n] = nap1[i];
            n++;
        }
        w = 0;
    }
    nap1[n] = '\0';
}

void wytnijtm2(wchar_t *nap1, wchar_t *nap2) {
    int n = 0, w = 0;

    for (int i = 0; nap1[i] != '\0'; i++) {
        for (int j = 0; nap2[j] != '\0'; j++) {
            if (nap1[i] == nap2[j]) {
                w += 1;
            }
        }

        if (w == 0) {
            nap1[n] = nap1[i];
            n++;
        }
        w = 0;
    }
    nap1[n] = '\0';
}

int main() {
    char napis1[] = "chmura";
    char napis2[] = "wiatr";
    wchar_t napis3[] = L"chmura";
    wchar_t napis4[] = L"wiatr";

    printf("%s\n%s\n", napis1, napis2);
    wytnijzw1(napis1,napis2);
    printf("%s\n\n",napis1);

    wprintf(L"%s\n%s\n",napis3,napis4);
    wytnijtm2(napis3,napis4);
    wprintf(L"%s\n",napis3);
    return 0;
}
