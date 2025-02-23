#include<stdio.h>
int main(){
    int disp[3][3];
    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("enter values for disp[%d][%d]:",i,j);
                scanf("%d",&disp[i][j]);
            }
        }

        for(i=0; i<3; i++)  {
            for(j=0;j<3;j++) {
                printf("%d ", disp[i][j]);
                }
                printf("\n");
            }

           for(i=0; i<3; i++)  {
                int sum =0;
            for(j=0;j<3;j++) {
                sum=sum+disp[i][j];

                }
                printf("%d is the sum",sum);
            }


return 0;
}
