#include <stdio.h>

int kbu(int,int);
int main(){
    
    int a,b,c;
    
    printf("Girilen sayinin karbuk sayisi olup olmadigini bulan program");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    b=a%10;
    c=kbu(a,b);
    
    if(c==0)
        printf("Girilen sayi karabuk sayisidir\n");
    else
        printf("Girilen sayi karabuk sayisi degildir\n");
    
    return 0;
}

int kbu(int a,int b){
    
    static int sonuc=0;
    
    if(a==0)
        return sonuc;
    else if(a!=0){
        if(a%10==b){
            return kbu(a/10,b);
        }
        else{
            sonuc++;
            return sonuc;
        }
    }
    return sonuc;
}

