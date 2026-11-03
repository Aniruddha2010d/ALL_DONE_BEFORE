#include<stdio.h>
int reverse(int num,int rev);
int main()
{
    int num;
    printf("Type the number: ");
    scanf("%d",&num);
    int rev;
    rev = reverse(num,0);
    printf("The reverse of %d is: %d\n",num ,rev);
}
int reverse(int num,int rev)
{
    if(num==0){
        return rev;
    };
    rev = (rev *10) + (num % 10);
    num = num / 10;
    return reverse(num,rev);
}