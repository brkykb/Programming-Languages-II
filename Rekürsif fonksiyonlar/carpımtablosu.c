#include <stdio.h>

void carp(int,int);

int main(){
    
    int a=1,b=0;
    printf("**Carpım tablosu**\n");
    carp(a,b);
    
    return 0;
}
void carp(a,b){
    
    if(a==11)
        return;
    else if(a<11){
        if(b==11){
            b=0;
            printf("\n");
            return carp(a+1,b);
        }
        else if(b<11)
            printf("%dx%d=%d ",a,b,a*b);
            return carp(a,b+1);
    }
}
