#include<stdio.h>
int main()
{
    int num;
    int og;
    printf("Type the number: ");
    scanf("%d",&num);
    og = num;
    int x = 0;
    int dig[10];
    int reverse = 0;
    do{
        dig[x] = num % 10;
        reverse = reverse*10 + dig[x];
        num = (num - dig[x])/10;
        x++;
    }while(num!= 0);
    printf("%d",reverse);
    if(reverse == og){
        printf("The number is a palindrome");
    }else{
        printf("The number is not a palindrome");
    };
}