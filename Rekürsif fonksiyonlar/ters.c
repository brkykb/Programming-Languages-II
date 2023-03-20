#include <stdio.h>

int ters(int);
int main(){
    
    int a,b;
    
    printf("Sayinin tersini yazdiran  program");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    b=ters(a);
    
    printf("Girilen sayinin tersi: %d",b);
    
    return 0;
}

int ters(int a){
    
    static int sonuc=0;
    
    if(a==0){
        sonuc/=10;
        return sonuc;
    }
    else if(a>0){
        sonuc=(sonuc*10)+(10*(a%10));
        return ters(a/10);
    }
    return sonuc;
}
