#include <stdio.h>

struct{
    
    float gercek;
    float sanal;

}islem[2];

void toplam(float,float,float,float);
int main(void){
    
    int i;
    printf("İlk sayiyi girin: ");
    scanf("%f",&islem[0].gercek);
    printf("İlk sayinin sanalini girin: ");
    scanf("%f",&islem[0].sanal);
    
    printf("İkinci sayiyi giriniz: ");
    scanf("%f",&islem[1].gercek);
    printf("İkinci sayinin sanalini girin: ");
    scanf("%f",&islem[1].sanal);
    
        toplam(islem[0].gercek,islem[0].sanal,islem[1].gercek,islem[1].sanal);
     
    return 0;
}
void toplam(float a,float b,float c,float d){
    
    printf("Toplam:%f+%fi",a+c,b+d);
}
