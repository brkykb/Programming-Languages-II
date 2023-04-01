#include<stdio.h>
#include<conio.h>

void swap(int*,int,int);
void fun1(int*,int,int);
int main(){

    int StudentNumber[15];
    int i=0, k, ReadNum;
    printf("Please enter your student number then press the enter button: ");

    while(1){
        ReadNum = getch();
        if( ReadNum==13 ) break;
        putchar(ReadNum);
        StudentNumber[i] = (int)(ReadNum-'0');
        i++;
    }
    fun1(StudentNumber,0,i-1);
    printf("\nArray after fun1: ");
    for(k=0 ; k<i ; k++)
        printf("%d", StudentNumber[k]);

    return 0;
}
void swap(int *array, int leftindex, int rightindex){
    int temp;
    temp = array[leftindex];
    array[leftindex] = array[rightindex];
    array[rightindex] = temp;
}
void fun1(int *array, int leftindex, int rightindex){
    if( leftindex<rightindex ){
        swap(array,leftindex,rightindex);
        fun1(array,leftindex+1,rightindex-1);
    }
}
