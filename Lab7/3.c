#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    
    char cumle[2000];
    int a=65,i,b=0;
    int *c;
    char *p;
    p=(char*)malloc(sizeof(char));
    c=(int*)malloc(sizeof(int));
    
    printf("Cumleyi girin: ");
    fgets(cumle,2000,stdin);
    
    while(a!=133){
        for(i=0;cumle[i]!='\0';i++){
            if(cumle[i]==a){
                p=(char*)realloc(p,(b+1)*sizeof(char));
                c=(int*)realloc(c,(b+1)*sizeof(int));
                *(p+b)=a;
                *(c+b)+=1;
            }
        }
        a++;
        b++;
    }
    for(i=0;i<b;i++){
        if(*(c+i)!=0)
            printf(" %d adet: %c \n",*(c+i),*(p+i));
    }
    free(p);
    free(c);
    
    return 0;
}
