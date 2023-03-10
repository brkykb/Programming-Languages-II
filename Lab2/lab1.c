#include <stdio.h>

int sum=0;

int fonk(int);
int main(){

    int a,b;
    printf("Bir sayi giriniz");
    scanf("%d",&a);
    b=fonk(a);

    printf("Toplam: %d",b);

    return 0;
}

int fonk(int a){

    
    if(a<=0)
        return sum;
    else if(a>0){
        sum=sum+a;
        return fonk(a=a-1);
    }   


    return 0;
}