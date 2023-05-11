#include <stdio.h>
#include <stdlib.h>

struct bilgilistesi{
    char kullaniciadi[10];
    char mail[50];
    char sifre[20];
    
};
void bilgi(struct bilgilistesi *,int);
int main(void){
    
    int sayi;
    
    printf("Kac kisinin bilgisini gireceginizi yaziniz");
    scanf("%d",&sayi);
    
    struct bilgilistesi *ptr;
    ptr=(struct bilgilistesi*)malloc(sayi*sizeof(struct bilgilistesi));
    
    bilgi(ptr,sayi);
    
    free(ptr);
    
    return 0;
}
void bilgi(struct bilgilistesi *ptr,int sayi){
    
    int i;
    for(i=0;i<sayi;i++){
        printf("%d.Kisinin kullanici adini giriniz:",i+1);
        scanf("%s",(ptr+i)->kullaniciadi);
        
        printf("%d.Kisinin mail adresi: ",i+1);
        scanf("%s",(ptr+i)->mail);
        
        printf("%d.Kisinin sifresi: ",i+1);
        scanf("%s",(ptr+i)->sifre);
    }
    
    for(i=0;i<sayi;i++){
        
        printf("%d.Kisinin kullanici adi: %s\n",i+1,(ptr+i)->kullaniciadi);
        printf("%d.Kisinin mail adresi: %s\n",i+1,(ptr+i)->mail);
        printf("%d.Kisinin sifresi: %s\n",i+1,(ptr+i)->sifre);
    }
}
