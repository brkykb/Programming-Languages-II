#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    
    char cumle[2000];
    char *p;
    int i,s=0,sayac=0;;
    
    p=(char*)malloc(sizeof(char));
    
    printf("Cumeleyi giriniz: ");
    fgets(cumle,2000,stdin);
    
    for(i=0;cumle[i]!='\0';i++){
        s++;
    }
    p=(char*)realloc(p,(s+1)*sizeof(char));
    strcpy(p,cumle);
    
    for(i=0;*(p+i)!='\0';i++){
        if(*(p+i)<65 || (*(p+i)>90 && *(p+i)<97) || *(p+i)>122)
           sayac++;
    }
    printf("Kelime sayisi %d",sayac++);
    
    free(p);
    
    return 0;
}
