/* 1.sorunun cevabı 8 5 19
                 6 5 13
                 4 5 9
                 2 5 7
                 0 5 7
*/

//2.sorunun cevabı

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

/* 3.sorunun cevabı 16
   4.sorunun cevabı 21
   5.sorunun cevabı c
   6.sorunun cevabı girilen sayiyi bir azaltarak yazdirir
   7.sorunun cevabı 11001
   8.sorunun cevabı d
   9.sorunun cevabı e
 
 

*/
