#include <stdio.h>

int main(void){
    
    int a,i;
    
    struct student {
        int number;
        char name[15];
        char surname[20];
        int midtermGrade;
      
    }dizi[10];
    printf("Kac ogrenci girilecegini yaziniz:(max 10) ");
    scanf("%d",&a);
    
    for(i=0;i<a;i++){
        printf("%d. Ogrencinin numarasini, adini, soyadini ve notunu giriniz:",(i+1));
        scanf("%d %s %s %d",&dizi[i].number,dizi[i].name,dizi[i].surname,&dizi[i].midtermGrade);
    }
    
    for(i=0;i<a;i++){
        printf("Ogrencinumarasi:%d\nAdi:%s\nSoyadi:%s\nNotu:%d\n",dizi[i].number,dizi[i].name,dizi[i].surname,dizi[i].midtermGrade);
    }
    
    return 0;
}
