#include <stdio.h>
#include <string.h>

int main(void){
    
    int deger;
    char a[20],b[20];
    
    printf("İlk kelimeyi giriniz: ");
    fgets(a,20,stdin);
    
    printf("İlk kelimeyi giriniz: ");
    fgets(b,20,stdin);
    
    deger=strcmp(a,b);
    
    if(deger==0)
        printf("Girilen kelimeler ayni");
    else if(deger>0)
        printf("Girilen degerler ayni degil ve ilk girilen kelime daha uzun");
    else if(deger<0)
        printf("Girilen degerler aynı degil ve ikinci kelime daha uzun");
    
    return 0;
}
