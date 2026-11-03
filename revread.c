#include <stdio.h>
int main(){
    int arr[10];
    printf("Type 10 numbers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    };
    for(int i = 9 ; i>=0; i--){
        printf("%d\t",arr[i]);
    }
}