#include <stdio.h>

int sum(int);
int main(){
    
    int a,b;
    
    printf("1'den n'e kadar toplam bulan program(pozitif)\n\n");
    
    printf("sayiyi giriniz: ");
    scanf("%d",&a);
    
    b=sum(a);
    
    printf("%d",b);
    
    return 0;
}

int sum(int a){
    
    static int b=0;
    
    if(a==0){
        return b;
    }
    else if(a>0)
        b+=a;
        return sum(a-1);
    
    return 0;
}
