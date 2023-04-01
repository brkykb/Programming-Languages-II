#include <stdio.h>

int carpma(int,int);
int main(){
    
    int a,b,c;
    printf("Carpilacak iki sayiyi giriniz:");
    scanf("%d %d",&a,&b);
    
    c=carpma(a,b);
    
    printf("Sonuc: %d",c);
    
    return 0;
}

int carpma(int a,int b){
    
    int static sum=0;
    if(b==0)
        return sum;
    else{
        sum+=a;
        return carpma(a,b-1);
    }
    return sum;
}
