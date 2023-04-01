#include <stdio.h>

int main(){
    
    int i=0,c=0;
    char a[100];
    
    printf("Kelime yaziniz: ");
    fgets(a,100,stdin);
    
    char *p;
    p=a;
    
    while(*(p+i)!='\0'){
        i++;
        c++;
    }
    printf("%d",--c);
    
    return 0;
}
