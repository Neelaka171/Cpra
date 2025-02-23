#include<stdio.h>
int main(){
    int arr[15]={2,5,1,7,1,2,8,2,6,2,9,4,2,1,10};
    int count1=0;
    int count2=0;

    for(int i=0;i<15;i++){
        if(arr[i]==2|| arr[i]==1){
            count1=count1+1;
        }
    }
     for(int i=0;i<15;i++){
        if( arr[i]>=6){
            count2=count2+1;
        }
    }
    printf("%d\n",count1);
    printf("%d",count2);







return 0;
}

