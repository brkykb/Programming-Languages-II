#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    int i,d,s=0;
    char a[2000];
    char *p;
    
    printf("Cumle giriniz: ");
    fgets(a,2000,stdin);
    
    for(i=0;a[i]!='\0';i++){
        s++;
    }
    s++;
    p=(char*)calloc(s, sizeof(char));
    strcpy(p,a);
    
    for(i=s-1;i>=0;i--){
        if(*(p+i)==' '||i==0){
            if(i==0){
                d=i;
            }
            else{
                d=i+1;
            }
            
            for(;*(p+d)!=' ' && *(p+d)!='\0';d++){
                printf("%c",*(p+d));
            }
            printf(" ");
        }
    }
    free(p);
    
    return 0;
}
