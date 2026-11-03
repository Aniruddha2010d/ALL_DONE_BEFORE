/*Prints a message on the screen*/
#include <stdio.h>
int main() 
{ 
    float a;//This sets float as data type of a    
    printf("Enter length of the rectangle\n");/*now it'll print the message to the user*/
    scanf("%f",&a);//This assigns the value of a according to the input given by user

    float b;//This sets float as data type of b
    printf("Enter width of the rectangle\n");/*now it'll print the message to the user*/
    scanf("%f",&b);//This assigns the value of b according to the input given by user

    printf("This is the perimeter of the rectangle: ")/*now it'll print the message to the user*/
    printf("%f", 2*(a+b));//Finally the perimeter is printed

    return 0;
}

