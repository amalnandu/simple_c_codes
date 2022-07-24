#include<stdio.h>

void main(){
int line; int j,k,i;
    printf("enter the no.of lines");
    scanf("%d",&line);

    for(i=1;i<=line;i++){
        for(j=i;j<=line;j++){
            printf(" ");
        }

        for(k=1;k<=i;k++){
            printf("*");
        }printf("\n");
    }


}