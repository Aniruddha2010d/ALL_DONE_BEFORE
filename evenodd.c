#include <stdio.h>
int evenodd(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(evenodd(n)){
        printf("Even number\n");
    }else{
        printf("Odd number\n");
    }
    return 0;
}