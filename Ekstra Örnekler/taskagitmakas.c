#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tkm(void);
int main(){

    srand(time(NULL));
    int a;
    
    printf("Tas kagit makas oyunu\n\n");
    printf("1.Oyna\n2.Kurallar\n3.Cikis\n");
    scanf("%d",&a);
    
    switch(a){
        case 1:
            tkm();
            break;
        case 2:
            printf("Kurallar:\n\n1.Taş, makası kırarak yener.\n2.Kağıt, taşı sararak yener.\n3.Makas, kağıdı keserek yener.");
            break;
        case 3:
            break;
        default :
            printf("Dogru girdiginizden emin olun ve tekrar calistirin\n");
            break;
    }
    return 0;
}
void tkm(void){
    
    int bot,sayi,b;
        
    printf("Asagidakilerden birini 1,2 veya 3 yazarak seciniz\n\n");
    printf("1.Tas\n2.Kagit\n3.Makas\n");
    scanf("%d",&sayi);

    bot=1+rand()%3;
    
    if(bot==1){
        printf("Bilgisayar tas secti\n");
        if(sayi==1){
            printf("Oyuncu tas secti\n\n");
            printf("Berabere\n\n");
        }
        else if(sayi==2){
            printf("Oyuncu kagit secti\n\n");
            printf("Oyuncu kazandi\n\n");
        }
        else if(sayi==3){
            printf("Oyuncu makas secti\n\n");
            printf("Bilgisayar kazandi\n\n");
        }
    }
    if(bot==2){
        printf("Bilgisayar kagit secti\n");
        if(sayi==2){
            printf("Oyuncu kagit secti\n\n");
            printf("Berabere\n\n");
        }
        else if(sayi==1){
            printf("Oyuncu tas secti\n\n");
            printf("Bilgisayar kazandi\n\n");
        }
        else if(sayi==3){
            printf("Oyuncu makas secti\n\n");
            printf("Oyuncu kazandi\n\n");
        }
    }
    if(bot==3){
        printf("Bilgisayar makas secti\n");
        if(sayi==3){
            printf("Oyuncu makas secti\n\n");
            printf("Berabere\n\n");
        }
        else if(sayi==1){
            printf("Oyuncu tas secti\n\n");
            printf("Oyuncu kazandi\n\n");
        }
        else if(sayi==2){
            printf("Oyuncu kagit secti\n\n");
            printf("Bilgisayar kazandi\n\n");
        }
    }
    printf("Tekrar oynamak icin 1 oyundan cikmak icin 2 yazabilirsiniz\n\n");
    scanf("%d",&b);
    if(b==1)
        return tkm();
    if(b==2)
        return;
}
