#include<stdio.h>
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        printf("enter the %d th value:",i+1);
        scanf("%d",&num[i]);

    }
   for(int i=0;i<10;i++){
       printf("%d",num[i]);

    }




return 0;
}
