#include <stdio.h>
int main()
{
    float t_c;
    printf("Type the temperaturen in Celsius scale\n");
    scanf("%f",&t_c);
    float f_c;
    f_c = (t_c*9/5)+32;
    printf("This is the temperature in Farenheit scale: ");
    printf("%f",f_c);
}