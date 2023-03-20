#include <stdio.h>

int enb(int[],int);
int main(){
    
    printf("**Girilen degerlerden en buyuk olan sayiyi bulan program**\n\n");
    
    int a,b[100],i,c;
    
    printf("Kac sayi girileceginizi yazin: (max 100 girilebilir)");
    scanf("%d",&a);
    
    printf("Sayilari giriniz: ");
    
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    c=enb(b,a);
    
    printf("Girilen en buyuk sayi: %d\n",c);
    
    return 0;
}

int enb(int b[],int a){
    
    int static i=0,sonuc=0;
    
    if(i==a)
        return sonuc;
    else if(i<a){
        if(b[i]>=sonuc){
            sonuc=b[i];
            i++;
            return enb(b,a);
        }
        else
            i++;
    }
    return 0;
}
