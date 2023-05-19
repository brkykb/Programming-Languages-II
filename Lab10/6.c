#include <stdio.h>
#include <stdlib.h>

struct program{
    
    int yas;
    struct program *next;
    
};
typedef struct program prg;

void yassilme(prg*,int);
int main(void){
    
    prg *head=NULL,*p=NULL;
    int i,yas2;
    
    printf("-1 girilene kadar deger alir\n");
    
    head=(prg*)malloc(sizeof(prg));
    p=head;
    p->yas=0;
    p->next=NULL;
    
    while(1){
        printf("Sayi giriniz: ");
        scanf("%d",&i);
        
        if(i==-1)
            break;
        else{
            p->next=(prg*)malloc(sizeof(prg));
            p->next->yas=i;
            p=p->next;
            p->next=NULL;
        }
    }
    printf("Yaslari giriniz: ");
    scanf("%d",&yas2);
    
    yassilme(head,yas2);
    
    p=head;
    while(p->next!=NULL){
        p=p->next;
        printf("%d\n",p->yas);
    }
   
    return 0;
}

void yassilme(prg *head,int yas2){
    
    int a=1;
    prg *p,*r;
    p=head;
    while(p->next != NULL){
        
        if(p->next->yas==yas2){
            if(a==2){
                r=p->next;
                p->next=p->next->next;
                free(r);
            }
            else
                a++;
        }
            p=p->next;
    }
}


