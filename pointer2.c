#include<stdio.h>
int main(){
    int age = 39;
    int *ptr = &age;
    ptr++;
    printf("%d\n",*ptr);
}
