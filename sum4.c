#include <stdio.h>

int main() {
    printf("Type the number of students: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Type the numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    };
    printf("The sum of the marks of the students is: %d\n",sum);
    int avg;
    avg = sum / n;
    printf("The average of marks of the students is: %d\n",avg);
    return 0;
}