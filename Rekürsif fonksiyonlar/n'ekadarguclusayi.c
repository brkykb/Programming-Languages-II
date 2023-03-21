#include <stdio.h>

int sonuc=1,i=1,sum=0;
int guclu(int);
int fakt(int);
void dongu(int);

int main(){
    
    int a;
    
    printf("n sayisina kadar olan guclu sayilari yazdiran program\n*n");
    printf("n sayisini giriniz");
    scanf("%d",&a);
    
    dongu(a);
    
    return 0;
}
void dongu(int a){
    
    int d;
    if(i==a)
        
        return;
    else{
        d=guclu(i);
        if(d==i)
            printf("%d\n",d);
        sum=0;
        i++;
        return dongu(a);
    }
}
int guclu(int a){
    
    if(a==0)
        return sum;
    
    else{
        sum+=fakt((a%10));
        sonuc=1;
        return guclu(a/10);
    }
}
int fakt(int a){
    
    if(a==0)
        return sonuc;
    else{
        sonuc*=a;
        return fakt(a-1);
    }
    return sonuc;
}

