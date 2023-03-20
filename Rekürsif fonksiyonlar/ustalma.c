#include <stdio.h>

int fonk(int,int);
int main(){
    
    int a,b,sum;
    
    printf("Taban ");
    scanf("%d",&a);
    
    printf("Ust ");
    scanf("%d",&b);
    
    sum=fonk(a,b);
    
    printf("%d",sum);
    
    return 0;
}
int fonk(int a, int b){
    
    static int sum=1;
    
    if(b==0)
        return sum;
    
    else if(b>0){
        sum*=a;
       
        return fonk(a,b-1);
    }
    
    return 0;
}
