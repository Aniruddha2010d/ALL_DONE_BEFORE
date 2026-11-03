#include <stdio.h>
int main()
{
    int num;
    int i = 10;
    printf("Type the number: ");
    scanf("%d",&num);
    int x = 0;
    int dig[10];
    int rem;
    while(x<11){
        dig[x] = num % i;
        rem = num;
        num = rem - dig[x];
        i = i * 10;
        x++;
    };
    int num2 = 0;
    while(x >= 0){
        num2 += (dig[x]*dig[x]*dig[x]);
        x--;
    }
    if(num2==num){
        printf("The number is an Armstrong number.");
    }else{
        printf("The number is not an Armstrong number.");
    };
}

