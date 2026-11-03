#include <stdio.h>
int main(){
    printf("Type the number of rows: ");
    int m;
    scanf("%d",&m);
    printf("Type the number of diagonals: ");
    int n;
    scanf("%d",&n);
    int mat[m][n];
    for(int b = 0;b < m;b++){
        printf("Enter elements in the %dth row of second matrix: \n",b+1);
        for(int i = 0;i < n;i++){
            scanf("%d",&mat[b][i]);
        };
    };
    int tmat[n][m];
    for(int b = 0;b < m;b++){
        for(int i = 0;i < n;i++){
            tmat[i][b] = mat[b][i];
        };
    };
    printf("The transpose of the matrix is: \n");
    for(int b = 0;b < n;b++){
        for(int i = 0;i < m;i++){
            printf("%d\t",tmat[b][i]);
        };
        printf("\n");
    };
    return 0;
}