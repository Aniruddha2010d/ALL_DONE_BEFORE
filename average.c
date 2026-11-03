#include <stdio.h>
int main()
{
    printf("Type the first number\n");
    float first_num;
    scanf("%f",&first_num);

    printf("Type the second number\n");
    float second_num;
    scanf("%f",&second_num);

    printf("Type the third number\n");
    float third_num;
    scanf("%f",&third_num);

    printf("Here is the average of the three numbers: ");
    printf("%f",(first_num+second_num+third_num)/3.0);
    return 0;
}