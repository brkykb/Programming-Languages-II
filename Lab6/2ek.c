#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a,b,i,c;
    int *p;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d",&a);
    
    p=(int*)malloc(a*sizeof(int));
    
    for(i=0;i<a;i++){
        scanf("%d",&b);
        *(p+i)=b;
    }
    printf("Eklenecek dizinin boyutunu giriniz: ");
    scanf("%d",&c);
    
    p=(int*)realloc(p,c*sizeof(int));
    for(i=a;i<a+c;i++){
        scanf("%d",&b);
        *(p+i)=b;
    }
    for(i=0;i<a+c;i++){
        printf("%d",*(p+i));
    }
    
    free(p);
    
    return 0;
}
