#include<stdio.h>
#include<string.h>
int main(){
  char f_name[10];
  char l_name[10];
  char full_name[25];
  int len;
  printf("Enter the frist name:");
  scanf("%s",f_name);
  printf("\nEnter the last  name:");
  scanf("%s",l_name);


     strcpy(full_name,f_name);
     strcat(full_name," ");
     strcat(full_name,l_name);

   printf("\nfull name is:%s\n",full_name);

   len=strlen(full_name);
   printf("%d",len);











return 0;
}
