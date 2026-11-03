#include <stdio.h>

int main()
{
    int a[5], i, largest;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    };
    largest = a[0];
    for(i = 1; i < 5; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        };
    };
    printf("Largest = %d\n", largest);
    int smallest = a[0];
    for(i = 1; i < 5; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        };
    };
    printf("Smallest = %d\n", smallest);
    return 0;
}