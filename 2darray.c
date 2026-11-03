#include <stdio.h>
int main(void){
    printf("Type the number of rows:\n");
    int n;
    scanf("%d",&n);
    printf("Type the number of diagonals:\n");
    int m;
    scanf("%d",&m);
    int arr[n][m];
    int i;
    for(i=0;i<n;i++){
        printf("Type the elements of the %dth row: \n",i+1);
        for(int a=0; a<m;a++){
            scanf("%d",&arr[i][a]);
        };
    };
    int rowsum[m];
    for(int c=0;c<m;c++){
        rowsum[c] = 0;
    };
    int e;
    for(e=0;e<n;e++){
        for(int b=0;b<m;b++){
            rowsum[e]+=arr[e][b];
        };
        printf("sum of the elements of %dth row is: %d\n" ,e+1 ,rowsum[e]);
    }
    return 0;
}