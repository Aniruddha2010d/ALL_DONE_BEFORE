#include <stdio.h>

int main() {
    int a[5];
    int i;
    printf("Type the numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    };
    int even = 0;
    int odd = 0;
    for(i=0;i<5;i++){
       if(a[i] % 2 == 0){
           even++;
       }else{
           odd++;
       }
    };
    printf("The number of the even elements of the array is: %d\n",even);
    printf("The number of the odd elements of the array is: %d\n",odd);
    return 0;
}