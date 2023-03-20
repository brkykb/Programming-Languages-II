#include <stdio.h>

int c=0;

void satir(int);
void yildiz(int);

int main(){
    
    int a;
    printf("Yildiz");
    scanf("%d",&a);
    
    satir(a);
    
    return 0;
}
void satir(a){
    
    static int i=1;
    
    if(i>a)
        return;
    else if(i<=a){
        
        yildiz(i);
        c=0;
        printf("\n");
        i++;
        satir(a);
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
