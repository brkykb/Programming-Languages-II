#include <stdio.h>

int c=0;

void satir(int,int);
void yildiz(int);
void bosluk(int);

int main(){
    
    int a;
    printf("Yildiz");
    scanf("%d",&a);
    
    satir(a,a);
    
    return 0;
}
void satir(a,b){
    
    static int i=1;
    
    if(i>a)
        return;
    else if(i<=a){
        
        bosluk(b);
        yildiz(i);
        c=0;
        printf("\n");
        i++;
        satir(a,b-1);
    }
}
void yildiz(i){
    
    if(c==i)
        return;
    else if(c<i){
        printf("*");
        c++;
        return yildiz(i);
    }
}

void bosluk(a){
    
    if(a<=0)
        return;
    else if(a>0){
        printf(" ");
        return bosluk(a-1);
    }
}
