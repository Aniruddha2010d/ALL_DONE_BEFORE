#include <stdio.h>
int main()
{
    int n;//This sets integer as data type of n
    printf("Type the number:\n");/*now it'll print the message to the user*/
    scanf("%d",&n);//This assigns the value of n according to the input given by user
   
    printf("Here is the cube of it: ");/*now it'll print the message to the user*/
    printf("%d",n*n*n);//Finally the cube of the number is printed

    return 0;
}