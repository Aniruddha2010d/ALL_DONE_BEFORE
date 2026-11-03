#include <stdio.h>
int main(void){
    int mat[3][3];
    for(int b = 0;b < 3;b++){
        printf("Enter elements in the %dth row of first matrix: \n",b+1);
        for(int i = 0;i < 3;i++){
            scanf("%d",&mat[b][i]);
        }
    };
    int mat2[3][3];
    for(int b = 0;b < 3;b++){
        printf("Enter elements in the %dth row of second matrix: \n",b+1);
        for(int i = 0;i < 3;i++){
            scanf("%d",&mat2[b][i]);
        }
    };
    int sum[3][3];
    for(int b = 0;b < 3;b++){
        for(int i = 0;i < 3;i++){
            sum[b][i] = mat[b][i]+mat2[b][i];
        };
    };
    printf("The sum of the two matrix is: \n");
    for(int b = 0;b < 3;b++){
        for(int i = 0;i < 3;i++){
            printf("%d\t",sum[b][i]);
        };
        printf("\n");
    };
    return 0;
}