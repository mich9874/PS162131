#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d,e,f;      //ax + by = c   dx + ey = f
scanf("%f\n%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e, &f);

float w, wx, wy;    //wyznaczniki macierzy z układów równań (wzory cramera)
w=a*e-b*d;
wx=c*e-b*f;
wy=a*f-c*d;

if (w!=0) {
    printf("x=%f, y=%f", wx/w, wy/w);   //przy w innym od 0 są rozwiązania
}
else if(wx==0&&wy==0) {
    printf("Układ ma nieskończenie wiele rozwiązañ.");  //przy w = 0, wx = 0 i wy = 0
}
else {
    printf("Brak rozwiązañ.");  //przy w = 0 nie ma rozwiązań
}
return 0;
}
