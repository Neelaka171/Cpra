#include<stdio.h>
int main(){
    int num[10];
    for(int i=0; i<10; i++){
        printf("enter the %d th value:",i+1);
        scanf("%d",&num[i]);

    }
    int max = num[0];
    int index;
    for(int i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
            index=i;
        }
        //printf(" %d ",num[i]);
    }
    printf("largest number of array is:%d index is %d",max,index);





return 0;
}
