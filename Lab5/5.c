#include <stdio.h>

int main(){
    
    int a[3],i;
    int *p,*temp;
    for(i=0;i<3;i++){
        printf("element %d = ",i+1);
        scanf("%d",&a[i]);
    }
    p=a;

    *temp=p[0];
    p[0]=p[1];
    p[1]=p[2];
    p[2]=*temp;
    
    for(i=0;i<3;i++){
        printf("element %d = %d\n",i+1,p[i]);
        
    }
    return 0;
}
