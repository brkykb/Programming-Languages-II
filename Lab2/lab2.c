#include <stdio.h>

int fonk(int[],int);
int main(){

    int a[100],x,b,i;

    printf("Girilecek sayi miktarini girin");
    scanf("%d",&b);

    for(i=0;i<b;i++){
        printf("Sayiyi giriniz: ");
        scanf("%d",&a[i]);
    }

    x=fonk(a,b);
    printf("%d",x);

    return 0;
}

int fonk(int a[],int b){

    static int enb=-9999,i=0;
    if(i>=b)
        return enb;
    else if(i<b){
        if(enb<=a[i]){
            enb=a[i];
            i++;
            return fonk(a,b);
        }
        else {
            i++;
            return fonk(a,b);
        }
    }
return 0;
}
