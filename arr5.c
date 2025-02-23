#include<stdio.h>
int main(){

    int A[10];
    int B[10];
    for(int i=0;i<10;i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
    }
    int C[20];
    int i;
    for(i=0;i<10;i++){
            C[i]=A[i];


    }
    for(i=0;i<10;i++){
        C[i+10]=B[i];
    }
    for(int i=0;i<20;i++){
        printf("%d\n",C[i]);
    }






return 0;
}
