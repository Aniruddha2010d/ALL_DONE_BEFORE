#include <stdio.h>
int main(){
    printf("Type the number of rows: ");
    int m;
    scanf("%d",&m);
    int mat[m][m];
    for(int b = 0;b < m;b++){
        printf("Enter elements in the %dth row of the matrix: \n",b+1);
        for(int i = 0;i < m;i++){
            scanf("%d",&mat[b][i]);
        };
    };
    int sum = 0;
    int b = 0;
    int i = 0;
    while(b<m){
        sum += mat[b][i];
        b++;
        i++;
    }
    printf("Sum of the diagonals of the matrix is: %d\n",sum);
}