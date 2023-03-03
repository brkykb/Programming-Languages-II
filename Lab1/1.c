#include <stdio.h>

int hesapla(int ogsayi, int gecme);
int main(){

    int ogsayi,gecme,i,sum=0,c;
    char a[100];

    printf("Kac ogrenci notu girilecegini yaziniz: (Ogrenci sayisi 100 kisiden fazla olamaz)\n");
    scanf("%d",&ogsayi);
    printf("Gecme notunu giriniz: \n");
    scanf("%d",&gecme);

    c=hesapla(ogsayi, gecme);
    printf("Kalan ogrenci sayisi: %d\n",c);
    
   return 0;
}
int hesapla(int ogsayi,int gecme){
    int b=0,i,sum;
    int a[100];

    if(ogsayi<=100){
        for(i=0;i<ogsayi;i++){
            printf("Ogrenci notlarını giriniz: \n");
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if(a[i]<gecme)
                b++;
        }
        sum=sum/ogsayi;
        printf("Sinif ortalamasi: %d\n",sum);
    }
    return b;
}