#include <stdio.h>

void fonk(int [],int);
int main(){
    
    int a[100],i,n;
    
    printf("Girilen sayilarin tek olanlarını yazdiran program\n\n");
    
    printf("Kac sayi gireceginizi yaziniz: (max 100 girilebilir)");
    scanf("%d",&n);
    printf("Sayilari giriniz:");
    
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
    fonk(a,n);
    
    
    return 0;
}

void fonk(int a[],int i){
    
    int static n=0;
   if(n==i)
       return;
   else if(n<i){
       if(a[n]%2!=0){
           printf("%d ",a[n]);
           n++;
           return fonk(a,i);
       }
       else{
           n++;
           return fonk(a,i);
       }
   }
}
