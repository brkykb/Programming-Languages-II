#include <stdio.h>

void bolum(int,int,int);

int main(){
    
    int a,b,c;
    printf("**Sayilarin girilen sayiya bolunup bolunmedigini soyleyen program**\n\n");
    
    printf("Baslangic degerini giriniz: ");
    scanf("%d",&a);
    
    printf("Bitis degerini giriniz");
    scanf("%d",&b);
    
    printf("Bolunecek sayiyi giriniz: ");
    scanf("%d",&c);
    
    bolum(a,b,c);
    
    return 0;
}

void bolum(int a,int b,int c){
    
    if(a>b)
        return;
    else{
        if(a%c==0)
            printf("%d\n",a);
        return bolum(a+1,b,c);
    }
}

