#include <stdio.h>

int main(void){
    
    int i,a;
    
    struct {
        
        char ad[20];
        char soyad[30];
        int numara;
        
    }ogrenci[5];
    
    printf("Kac ogrenci gireceginizi yaziniz: (max 5)");
    scanf("%d",&a);
    
    for(i=0;i<a;i++){
        printf("\n%d. Ogrencinin adini girin: ",i+1);
        scanf("%s",ogrenci[i].ad);
        printf("\n%d. Ogrencinin soyadini girin: ",i+1);
        scanf("%s",ogrenci[i].soyad);
        printf("\n%d. Ogrencinin numarasini girin: ",i+1);
        scanf("%d",&ogrenci[i].numara);
    }
    printf("**Girilen Bilgiler**\n\n");
    
    for(i=0;i<a;i++){
        printf("\n%d. Ogrencinin adi: %s",i+1,ogrenci[i].ad);
        printf("\n%d. Ogrencinin soyadi: %s",i+1,ogrenci[i].soyad);
        printf("\n%d. Ogrencinin numarasi: %d",i+1,ogrenci[i].numara);
    }
    return 0;
}
