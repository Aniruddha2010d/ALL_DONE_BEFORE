#include<stdio.h>
int prod(int num,int term){
    if(num==0){
        return 1;
    }
    term = num % 10;
    num = num / 10;
    return term * prod(num,0);
}
int main()
{
    int num;
    printf("Type the number: ");
    scanf("%d",&num);
    int product;
    product = prod(num,0);
    printf("The product of terms of %d is: %d\n",num ,product);
}
