#include <stdio.h>

int bolme(int,int);
int main(){
    
    int a,b,c;
    printf("Bolme Islemi");
    printf("Sayiyi ve bolunecek sayiyi giriniz");
    scanf("%d %d",&a,&b);
    
    c=bolme(a,b);
    printf("%d",c);
    
    return 0;
}
int bolme(a,b){
    
    static int sonuc=0;
    if(a<=0)
        return sonuc;
    else if(a>0){
        sonuc++;
        return bolme(a-b,b);
    }
    return sonuc;
}
