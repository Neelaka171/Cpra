#include<stdio.h>

int main(){

    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",arr[i][j]);

        }
        printf("\n");
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(i==j){
            printf("diagonal is:%d\n",arr[i][j]);
                }
        }
    }


return 0;
}
