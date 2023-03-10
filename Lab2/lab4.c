#include <stdio.h>

int i=1;
int fonk(int,int);
int main(){

    int a,b,c;
    printf("iki tane sayi giriniz");
    scanf("%d %d",&a,&b);

    c=fonk(a,b);
    printf("%d",c);


    return 0;
}

int fonk(int a, int b){

    static int ebob=0;
        if(i>a || i>b)
            return ebob;
        
        else{ if(b%i==0 && a%i==0){
                ebob=i;
                i++;
                return fonk(a,b);
            }
            else {
                i++;
                return fonk(a,b);
            }
        }
        

    return 0;
}