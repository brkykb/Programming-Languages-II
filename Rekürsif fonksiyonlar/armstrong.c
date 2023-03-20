#include <stdio.h>
#include <math.h>

int arm(int,int);
int basamak(int);
int main(){
    
    int a,b,c;
    
    printf("Girilen sayinin armstrong olup olmadigini bulan program");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    c=basamak(a);
    b=arm(a,c);
    
    if(b==a)
        printf("Girilen sayi armstrongdur");
    else
        printf("Girilen sayi armstrong degildir");
    
    return 0;
}
int basamak(int a){
    
    static int sonuc=0;
    
    if(a==0)
        return sonuc;
    else if(a!=0){
        sonuc++;
        return basamak(a/10);
    }
    return sonuc;
}

int arm(int a,int c){
    
    static int sonuc=0;
    
    if(a==0)
        return sonuc;
    else if(a!=0){
        sonuc+=pow(a%10,c);
        return arm(a/10,c);
    }
    return sonuc;
}
