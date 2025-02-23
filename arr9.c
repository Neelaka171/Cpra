 #include <stdio.h>
#include <string.h>

int main() {
    char names[5][20]={"Neelaka","Nadee","shan","wije","sooriya"};
    char s_name[20];
    int found=0;

    printf("Enter your search name:");
    scanf("%s",s_name);
    for(int i=0;i<5;i++){
    if(strcmp(names[i],s_name ) == 0){
        found =1;
    }
    }
    if(found){
        printf("found");
    }else{
        printf("not found");
    }


    return 0;
}

