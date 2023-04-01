#include <stdio.h>

int main(){
    
    int a[10],i,b,sum=0;
    int *p;
    
    printf("Kac sayi toplayacaginizi yaziniz(max 10 olabilir):");
    scanf("%d",&b);
    if(b<=10){
        for(i=0;i<b;i++){
            printf("element - %d = ",i+1);
            scanf("%d",&a[i]);
        }
        p=a;
        i=0;
        while(i!=b){
            sum+=*(p+i);
            i++;
        }
        printf("%d",sum);
    }
    return 0;
}
