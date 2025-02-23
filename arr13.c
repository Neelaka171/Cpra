#include<stdio.h>

int main(){

    int arr1[]={1,3,5,7,9} ;
    int arr2[]={2,4,6,8,10} ;
    int arr3[10];
    for(int i=0;i<5;i++){
        arr3[i*2]=arr1[i];
        arr3[2*i+1]=arr2[i];
    }
    for(int i=0;i<10;i++){
        printf(" %d ",arr3[i]);
    }


return 0;
}
