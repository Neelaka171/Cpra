#include<stdio.h>
int main(){
    int numbers[5] = {22,33,44,55,66};
    int sum=0;int avg=0;
    for(int i=0 ; i<5;i++){
            sum=sum+numbers[i];
    }
    avg=sum/5;
    printf("avg is:%d",avg);
    printf("sum is:%d",sum);








return 0;
}
