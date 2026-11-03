#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p = calloc(5, sizeof(int));
    printf("Type the number: ");
    scanf("%d",&p[40]);
    printf("%d",p[3]);
}