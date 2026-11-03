#include<stdio.h>
int main()
{
    float num1;
    float num2;
    char operator;
    printf("Type the first number: ");
    scanf("%f",&num1);
    printf("Type the second number: ");
    scanf("%f",&num2);
    printf("Type the operator: ");
    scanf("%s",&operator);
    switch(operator) {
        case '+' : printf("%f",num1+num2);
        break;
        case '-' : printf("%f",num1-num2);
        break;
        case '*' : printf("%f",num1*num2);
        break;
        case '/' : printf("%f",num1/num2);
        break;
    }
    printf("%f",(num1/num2));
}
