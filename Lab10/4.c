#include <stdio.h>
#include <stdlib.h>

struct program{
    
    int sayi;
    struct program *next;
    
};
typedef struct program prg;

void lastaddend(prg*);
int main(void){
    
    prg *head=NULL,*p=NULL;
    int a=0,i;
    
    printf("-1 girilene kadar deger alir\n");
    while(1){
        printf("Sayi giriniz: ");
        scanf("%d",&i);
        
        if(i==-1)
            break;
        
        if(a==0){
            head=(prg*)malloc(sizeof(prg));
            p=head;
            p->sayi=i;
            p->next=NULL;
            a++;
        }
        else{
            p->next=(prg*)malloc(sizeof(prg));
            p->next->sayi=i;
            p=p->next;
            p->next=NULL;
        }
        
    }
    lastaddend(head);
    
   
    return 0;
}

void lastaddend(prg *head){
    
    prg *p,*r=NULL,*l;
    
    p=head;
    l=head;
    while(p->next!=NULL) {
        r=p;
        p=p->next;
    }
    l=r->next;
    r->next->next=head->next;
    r->next=head;
    head->next=NULL;
    
    
    head=l;
    while(head!=NULL){
        printf("%d\n",head->sayi);
        head=head->next;
    }
    
    
}
