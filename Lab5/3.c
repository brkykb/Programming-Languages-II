#include <stdio.h>

int main(){
    
    int a[5],i;
    int *p;
    
    for(i=0;i<5;i++){
        printf("Sayi giriniz: \n");
        scanf("%d",&a[i]);
    }
    i=0;
    p=a;
    
    for(i=0;i<5;i++){
        printf("element-%d : %d\n",a[i] ,*(p+i));
    }
    return 0;
}
