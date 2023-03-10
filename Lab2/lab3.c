#include <stdio.h>

int s=0;
int fonk(int);
int main(){

    int b,a;
    printf("Bir sayi giriniz");
    scanf("%d",&a);

    b=fonk(a);
    printf("%d",b);

    return 0;
}

int fonk(int a){

    if(a<=0)
        return s;
    else if(a>0){
        s=s+(a%10);
        return fonk(a=a/10);
        
    }


    return 0;
}