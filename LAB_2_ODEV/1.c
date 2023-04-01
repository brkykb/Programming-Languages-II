#include <stdio.h>

void ust(void);
void alt(void);
void enalt(void);

int main(){
    
    ust();
    alt();
    enalt();

    return 0;
}
void ust(void){
    
    static int i,b=10,c=1;
    
    if(c==7)
        return;
    else{
        for(i=0;i<b;i++){
            printf(" ");
        }
        for(i=0;i<c;i++)
            printf("*");
        printf("\n\n");
    
        b--;
        c+=2;
        return ust();
    }
}

void alt(void){
    
    static int i,b=10,c=1;
    
    if(c==11)
        return;
    else{
        for(i=0;i<b;i++){
            printf(" ");
        }
        
        for(i=0;i<c;i++)
            printf("*");
        printf("\n\n");
    
        b--;
        c+=2;
        
        return alt();
    }
}

void enalt(){
    
    static int i,b=10,c=0;
    
    if(c==3)
        return;
    
    else{
        for(i=0;i<b;i++){
            printf(" ");
        }
        
        printf("|");
        c++;
        printf("\n\n");

        return enalt();
    }
}

