#include<stdio.h>
int fact(int n);
int fact(int n){
    if(n == 0){
        return 1;
    };
    n = n * fact(n-1);
    return n;
}
int main(){
    int num;
    printf("Type number: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d.\n",num ,fact(num));
    return 0;
}