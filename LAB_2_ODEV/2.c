#include <stdio.h>

int bolme(int,int);
int main(){
    
    int a,b,c;
    printf("Sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("Bolunecek sayiyi giriniz: ");
    scanf("%d",&b);
    
    c=bolme(a,b);
    
    printf("Sonuc: %d",c);
    
    return 0;
}

int bolme(int a,int b){
    
    int static sum=0;
    if(a<=0)
        return sum;
    else{
        sum++;
        return bolme(a-b,b);
    }
  
    return sum;
}
