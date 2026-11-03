#include<stdio.h>
int main()
{
    printf("What's up!\n Let's try the calculator.!!");
    getchar();
    
    printf("Type the first number: ");
    float num1;
    scanf("%f",&num1);

    printf("Type the operation type: ");
    char operat;
    scanf("%s",&operat);

    printf("Type the second number: ");
    float num2;
    scanf("%f",&num2);

    if (operat == '+'){
        printf(".5%f\n",num1+num2);
    }

    if (operat == '*'){
        printf("%.5f\n",num1*num2);
    }

    if (operat == '-'){
        printf("%.5f\n",num1-num2);
    }

    if (operat == '/'){
        printf("%.5f\n",num1/num2);
    }

    printf("#The result may have eror.(especially in decimal points!)");


    return 0;
}