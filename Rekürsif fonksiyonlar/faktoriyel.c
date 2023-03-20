#include <stdio.h>

int fakt(int);
int main(){
    
    int a,b;
    
    printf("Faktoriyel hesaplayan program\n\n");
    
    printf("Sayiyi giriniz: ");
    scanf("%d",&a);
    
    b=fakt(a);
    
    printf("%d",b);
    
    return 0;
}

int fakt(int a){
    
    static int b=1;
    
    if(a==0){
        return b;
    }
    else if(a>0)
        b*=a;
        return fakt(a-1);
    
    return 0;
}
