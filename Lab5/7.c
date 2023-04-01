#include <stdio.h>

int main(){
    
    int i=0;
    char a[100];
    
    printf("Kelime yaziniz:");
    fgets(a,100,stdin);
    
    char *p;
    p=a;
    
    while(*(p+i)!='\0'){
        i++;
    }
    printf("\n");
    while(i>=0){
        printf("Reverse: %c",*(p+i));
        i--;
    }
    
    return 0;
}
