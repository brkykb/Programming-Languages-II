#include <stdio.h>
#include <stdlib.h>

struct addend{
    int sayi;
    struct addend *next;
};
typedef struct addend node;

int main(void){
    
    int i,a=0;
    node *head=NULL,*p=NULL,*r=NULL;
    
    printf("-1 girilene kadar girilen sayilari alan ve son girileni listenin ilk basina alan program\n");
    
    while(1){
        
        printf("Sayi giriniz: ");
        scanf("%d",&i);
        
        if(i==-1)
            break;
        
        if(a==0){
            head=(node*)malloc(sizeof(node));
            p=head;
            p->sayi=i;
            p->next=NULL;
            a++;
        }
        else{
            
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            p->sayi=i;
            p->next=NULL;
        }
    }
    p=head;
    while(1){
        
        if(p->next->next==NULL)
            break;
        p=p->next;
    }
    
    r=p->next;
    p->next=NULL;
    r->next=head;
    head=r;
    p=head;

    
    while(p!=NULL){
        printf("%d\n",p->sayi);
        p=p->next;
    }
    
    
    
    
    return 0;
}

node 
