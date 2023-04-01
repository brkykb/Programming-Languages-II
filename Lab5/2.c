#include <stdio.h>

int main(){
   
   int a,b;
   
   int *p1,*p2;
   
   printf("ilk sayi: \n");
   scanf("%d",&a);
   printf("ikinci sayi: \n");
   scanf("%d",&b);
   
   p1=&a;
   p2=&b;
   printf("Toplam: %d ",*p1+*p2);
   
   return 0;
}
