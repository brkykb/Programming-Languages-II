#include <stdio.h>

int enk(int[],int);
int main(){
    
    printf("**Girilen degerlerden en kucuk olan sayiyi bulan program**\n\n");
    
    int a,b[100],i,c;
    
    printf("Kac sayi girileceginizi yazin: (max 100 girilebilir)");
    scanf("%d",&a);
    
    printf("Sayilari giriniz: ");
    
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    c=enk(b,a);
    
    printf("Girilen en kucuk sayi: %d\n",c);
    
    return 0;
}

int enk(int b[],int a){
    
    int static i=0,sonuc=9999;
    
    if(i==a)
        return sonuc;
    else if(i<a){
        if(b[i]<sonuc){
            sonuc=b[i];
            i++;
            return enk(b,a);
        }
        else
            i++;
    }
    return sonuc;
}
