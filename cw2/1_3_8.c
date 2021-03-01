#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;
float a,b,c,p;

printf("Jaka figura?\n");
printf("1-kwadrat\n");
printf("2-prostokat\n");
printf("3-trojkat\n");
scanf("%d",&i);
if (i==1){
    printf("Podaj dlugosc boku kwadratu\n");
    scanf("%f",&a);
    p=a*a;
}
else if (i==2){
    printf("Podaj dlugosci bokow prostokata\n");
    scanf("%f\n%f",&a,&b);
    p=a*b;
}
else if (i==3){
    printf("Podaj dlugosc podstawy i wysokosc\n");
    scanf("%f\n%f",&a,&c);
    p=0.5*a*c;
}
printf("Pole= %f\n",p);
return 0;
}
