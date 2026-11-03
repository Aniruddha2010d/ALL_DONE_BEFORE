#include<stdio.h>
void f1tn(int n){
    if(n==0){
        return;
    };
    printf("%d\n",n);
    f1tn(n - 1);
}
int main()
{
    int n;
    printf("Type the number count: ");
    scanf("%d",&n);
    f1tn(n);
    return 0;
}