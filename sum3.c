#include<stdio.h>
void walk(int *sum, int *avg, int *product, int count, int num[]){
    int i = 0;
    while(i<=count){
        *sum = (*sum + num[i]);
        *product = (*product) * num[i];
        *avg = *sum / count;
        i++;
    };
}

int main(){
    int count;
    printf("Type how many numbers are present: ");
    scanf("%d",&count);
    int num[count];
    for(int i=0;i+1<=count;i++){
        int num[count];
        printf("Type %dth number: \n",i+1);
        scanf("%d",&num[i]);
    };
    int sum = 0, avg = 0, product = 1;
    walk(&sum, &avg, &product, count, num);
    printf("The sum is: %d\n",sum);
    printf("The average is: %d\n",avg);
    printf("The product is: %d\n",product);
}
