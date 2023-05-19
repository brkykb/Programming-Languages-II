#include <stdio.h>
#include <stdlib.h>


struct tekcift{
    
    int sayi;
    struct tekcift *next;
    
};
typedef struct tekcift program;
program *next=NULL;

int main(void){
    
    int i,a=0;
    program *head=NULL,*p = NULL,*r;
    
    do{
        
        printf("Sayi giriniz: ");
        scanf("%d",&i);
        if(i%2!=0){
            if(a==0){
                head=(program*)malloc(sizeof(program));
                p=head;
                p->sayi=i;
                a++;
                p=p->next;
            }
            else{
                r=(program*)malloc(sizeof(program));
                r->next=head;
                head=r;
                r->sayi=i;
            }
            
        }
        else{
            if(a==0){
                head=(program*)malloc(sizeof(program));
                p=head;
                p->sayi=i;
                a++;
            }
            else{
                p->next=(program*)malloc(sizeof(program));
                p->sayi=i;
                p=p->next;
                
                
            }
            
        }
        p->next=NULL;
        
        }while(i!=-1);
    
    p=head;
    while(p!=NULL){
        printf("%d\n",p->sayi);
        
        p=p->next;
    }
    
        
        
        return 0;
    }
    

