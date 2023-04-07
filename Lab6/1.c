#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a,i,temp;
    int *p;
    
    printf("Kaç sayı girileceğini yazınız:");
    scanf("%d", &a);
    
    p = (int*)calloc(a,a*sizeof(int));
    
    temp=-999999;
    for(i=0;i<a;i++){
        printf("Deger girin: ");
        scanf("%d",p+i);
        
        if(*(p+i)>temp)
            temp=*(p+i);
    }
    printf("En buyuk sayi: %d",temp);
    
    return 0;
}
