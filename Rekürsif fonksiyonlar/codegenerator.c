#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen(int);
int main(){
    
    int a;
    srand(time(NULL));
    
    printf("**Kod uretici**\n\n");
    printf("Hane sayisi giriniz: ");
    scanf("%d",&a);
    
    gen(a);
    
    return 0;
}
void gen(a){
    
    static int b=0,i=0;
    if(i==a){
        printf("%d",b);
        return;
    }
    else if(i<a){
        
        b=(b*10)+(1+rand()%10);
        i++;
        gen(a);
    }
}
