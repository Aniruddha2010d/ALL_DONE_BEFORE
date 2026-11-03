#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int n = 0;
    while(num != 0)
    {
        n = n + (num % 10);
        num = num / 10;
    };
    printf("The sum of the digits is: %d.",n);
}