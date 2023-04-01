#include <stdio.h>

int ust(int,int);
int main(){
    
    int a,b,c;
    printf("Tabanı ve ust degeri giriniz:");
    scanf("%d %d",&a,&b);
    
    c=ust(a,b);
    
    printf("Sonuc: %d",c);
    
    return 0;
}
int ust(int a,int b){
    
    int static sum=1;
    if(b==0)
        return sum;
    else{
        sum*=a;
        return ust(a,b-1);
    }
    return sum;
}
