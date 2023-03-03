#include <stdio.h>

int kitleIndeks(float boy, float kilo);
int main(){

    float boy,kilo;
    int x;

    printf("Boyunuzu giriniz: ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz: ");
    scanf("%f",&kilo);

    x=kitleIndeks(boy,kilo);
    if(x==1)
        printf("Zayıf");
    if(x==2)
        printf("Normal");
    if(x==3)
        printf("Kilolu");
    if(x==4)
        printf("Obez");
    return 0;
}

int kitleIndeks(float boy, float kilo){

    float sonuc;
    boy=boy*boy;
    sonuc=kilo/boy;
    if(sonuc<=18)
        return 1;
    else if(sonuc>=19 && sonuc <26)
        return 2;
    else if(sonuc>=26 && sonuc <31)
        return 3;
    else
        return 4;
}
