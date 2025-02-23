#include<stdio.h>
int main(){

    int i,j;
    int num[10];
    for(i=0;i<10;i++){
        num[i]=(i+1)*(i+1);

    }
    for(j=0;j<10;j++){
        printf("The square of %d is :%d\n",j+1,num[j]);
    }







return 0;
}
