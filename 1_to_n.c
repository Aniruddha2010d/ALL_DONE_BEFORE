#include<stdio.h>
void f1tn(int n){
    if(n==0){
        return;};
    f1tn(n - 1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("Type the number count: ");
    scanf("%d",&n);
    f1tn(n);
    return 0;
}