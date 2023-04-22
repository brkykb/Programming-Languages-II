#include <stdio.h>
#include <string.h>

int main(void){
    
    char cumle[1000],kelime[20];
    int i=0,a,s=0,b=0;
    
    printf("Cumle giriniz: ");
    fgets(cumle,1000,stdin);
    
    printf("Kelime giriniz: ");
    fgets(kelime,20,stdin);
    
    a=strlen(kelime);
    
    while(cumle[i]!='\0'){
        
        if(b!=a){
            if(cumle[i]!=kelime[b]){
                b=0;
                s++;
            }
            else{
                b++;
                s++;
            }
        }
        else
            break;
        i++;
    }
    printf("%d",s-a);
    
    return 0;
}
