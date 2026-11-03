#include<stdio.h>
int main()
{
int n;
printf("Type the number: ");
scanf("%d",&n);
int first = 0;
int second = 1;
int next = 0;
int i = 1;
int sum = 0;
    while(i<=n-1){
        printf("%d\n",next);
        next=first+second;
        sum = sum+next;
        second = first;
        first = next;
        i++;
    };
    printf("fib(%d) : %d\n",n,next);
    printf("The sum is: %d\n",sum);
}