#include <stdio.h>

void sayi(int);
int main(){
    
    int a;
    
    printf("Girilen sayini ilk ve son basamagini bulan prpgram");
    
    printf("Sayiyi giriniz");
    scanf("%d",&a);
    
    sayi(a);
    
    return 0;
}
void sayi(int a){
    
    static int b=0,c=0;
    
    if(a<10){
        printf("İlk basamak: %d\n",a);
        printf("Son basamak: %d",c);
    }
    else if(a!=0){
        if(b==0){
            c=(a%10);
            b++;
        }
        return sayi(a/10);
    }
}
