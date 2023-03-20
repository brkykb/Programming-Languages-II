#include <stdio.h>

int basamak(int);
int main(){
    
    int a,b;
    
    printf("Sayinin basamak toplamini bulan program");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    b=basamak(a);
    
    printf("Basamak toplami: %d",b);
    
    return 0;
}

int basamak(int a){
    
    static int sonuc=0;
    
    if(a==0)
        return sonuc;
    else if(a!=0){
        sonuc+=a%10;
        return basamak(a/10);
    }
    return sonuc;
}
