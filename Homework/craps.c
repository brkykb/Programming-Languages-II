#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void craps();
int main(){

int a,b;

printf("\n***Craps***\n\n");
printf("1.Oyna\n2.Kurallar\n3.Cikis");
scanf("%d",&a);

switch (a){
    case 1:
        printf("Oyuna baslamak icin '1' yaziniz");
        scanf("%d",&b);
        if(b==1)
            craps();
        break;
    case 2:
        printf("* Iki zar atilir\n* Zarlarin toplami hesaplanir\n* Ilk atista 7 veya 11 gelirse oyuncu kazanir\n* Ilk atista 2, 3 veya 12 gelirse oyuncu kaybeder\n* Ilk atista 4,5,6,8,9,10 gelirse bu oyuncunun puani oluyor\n* Oyuncu 7 atmadan önce kendi puanini tutturmalidir\n\n");
        printf("Oyuna baslamak icin '1' yaziniz");
        scanf("%d",&b);
        if(b==1)
            craps();
        break;
    default:
        printf("\u2639\u2639");
}
    return 0;
}
void craps(){
    int a,sum=0,i,b=0,puan=0,c;
    while(1){

        for(i=0;i<2;i++){
            srand(time (NULL));
            a= 1 + rand() % 6;  
            sum+=a;
            b++;
        }
        if(b==2){
            if(sum==7 || sum==11){
                printf("Oyunu kazandiniz\n");
                printf("Gelen sayi %d",sum);
                break;
            }
            if(sum==2 || sum==3 || sum== 12){
                printf("Oyunu kaybettiniz\n");
                printf("Gelen sayi %d",sum);
                break;
            }
            if(sum==4|| sum==5|| sum==6|| sum==8|| sum==9|| sum==10){
                puan=sum;
                sum=0;
                printf("Gelen sayi %d\n",puan);
                printf("Yeniden denemek icin '1' yaziniz\n");
                scanf("%d",&c);
                if(c==1){
                     continue;
                }
            }
        }
        if(b>3){
            if(sum!=7){
                if(puan==sum){
                    printf("Oyunu kazandiniz!!\n");
                    printf("Gelen sayi %d",sum);
                    break;
                }
                else {
                    printf("Puaniniz: %d\n",puan);
                    printf("Gelen sayi: %d\n",sum);
                    printf("Tekrar denemek icin '1' yaziniz\n");
                    scanf("%d",&c);
                    if(c==1){
                        continue;
                    }
                    else{
                        printf("Yanlis girdiniz");
                        break;
                    }
                }
            }
            else if(sum==7){
                printf("Oyunu kaybettiniz");
                break;
            }
        sum=0;
        }
    }
}