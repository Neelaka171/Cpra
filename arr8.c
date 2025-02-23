#include<stdio.h>
main(){
    char a[27];
    int i;
    for(i=65;i<91;i++){
        a[i-'A']=i;
    }
    a[26]='\o';
    printf("%s",a);







return 0;
}
