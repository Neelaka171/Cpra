#include<stdio.h>
int main(){

    int sub[5];
    int avg;
    int sum=0;
    for(int i=1;i<=5;i++){
        scanf("%d",&sub[i]);
        sum=sum+sub[i];
         printf("summation of %d sub:%d\n",i,sum);


    }

    avg=sum/5;
    printf("summation of all subject:%d",sum);
    printf("avarage is:%d",avg);






return 0;
}
