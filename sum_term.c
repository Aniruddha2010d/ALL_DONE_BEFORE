#include<stdio.h>
int n(int num){
    if(num==0){
        return 0;
    };
    return num %10 + n(num/10);
}
int main()
{
    int num;
    printf("Type the number: ");
    scanf("%d",&num);
    printf("%d\n",n(num));

}