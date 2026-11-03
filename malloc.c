#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p = malloc(5 * sizeof(int));
    printf("Type the number: ");
    scanf("%d",&p[100]);
    printf("%d",p[10]);
}