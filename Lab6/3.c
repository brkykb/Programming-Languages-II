#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    int i;
    char *p,a[6]={"berkay"},b[9]={"karabulut"};
    
    
    
    p=(char*)calloc(6,sizeof(char));
    
    strcpy(p,a);
    
    p=(char*)realloc(p,20*sizeof(char));
    
    strcpy(p+6,b);
    
    for(i=0;i<=20;i++){
        printf("%c",*(p+i));
    }
    return 0;
}
