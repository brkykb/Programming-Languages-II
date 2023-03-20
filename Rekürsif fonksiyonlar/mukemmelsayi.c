#include <stdio.h>

int muk(int);
int main(){
    
    int a,b;
    printf("Girilen sayinin mukemmel sayi olup olmadigini bulan program");
    printf("Sayi giriniz");
    scanf("%d",&a);
    
    b=muk(a);
    if(b==(a))
        printf("Girilen sayi mukemmel sayidir");
    else
        printf("Girilen sayi mukemmel sayi degildir");
    
    return 0;
}
int muk(a){
    
    static int i=1,sonuc=0;
    
    if(i==a)
        return sonuc;
    else if(i<a){
        if(a%i==0){
            sonuc+=i;
            i++;
            return muk(a);
        }
        else{
            i++;
            return muk(a);
        }
    }
    return sonuc;
}
