#include<stdio.h>
int main(){
    int arr[10];
    int V;
    for(int i=0 ; i<10; i++){
        printf("enter %d th value:",i+1);
        scanf("%d",&arr[i]);
    }


   for(int i=0 ; i<10; i++){
        printf("  %d  ",arr[i]);
   }


        printf("\nenter val of V:");
        scanf("%d",&V);
    int i;
         do{
            if(arr[i]==V){
                printf("v is in the array\n");
            }else{
                printf("v is not in the array\n");
            }

        }while(arr[i]!=V);






return 0;
}
