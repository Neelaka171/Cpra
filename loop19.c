#include<stdio.h>
int main(){
    int num,steps=0;
    printf("enter positive int is:");
            scanf("%d",&num);
    printf("initial value is:%d\n",num);
    do{

            if(num%2==1){
                    num=(num*3)+1;
                printf("Next value is:%d\n",num);
            }else{
                num=num/2;
                printf("Next value is:%d\n",num);
            }
            steps++;

    }while (num != 1);
    printf("final value is 1,number of steps is %d",steps);




return 0;
}
