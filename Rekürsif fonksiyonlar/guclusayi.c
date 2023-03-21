#include <stdio.h>

int sonuc=1;
int guclu(int);
int fakt(int);

int main(){
    
    int a,c;
    
    printf("Girilen sayininin guclu sayi olup olmadigini yazdiran program\n*n");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    c=guclu(a);
    if(c==a)
        printf("Girilen sayi guclu sayidir");
    else
        printf("Girilen sayi guclu sayi degildir");
    
    return 0;
}
int guclu(int a){
    
    static int sum=0;
    if(a==0)
        return sum;
    
    else{
        sum+=fakt((a%10));
        sonuc=1;
        return guclu(a/10);
    }
}
int fakt(int a){
    
    if(a==0)
        return sonuc;
    else{
        sonuc*=a;
        return fakt(a-1);
    }
    return sonuc;
}

