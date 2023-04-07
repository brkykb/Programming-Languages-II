#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    int i;
    char *p,a[50];
    
    p=(char*)calloc(20,20*sizeof(char));
    
    printf("Ad ve soyad: ");
    fgets(a,50,stdin);
    strcpy(p,a);
    
    for(i=0;*(p+i)!='\0';i++){
        printf("%c",*(p+i));
    }
    
    free(p);
    
    return 0;
}
