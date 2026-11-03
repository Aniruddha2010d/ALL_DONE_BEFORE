#include<stdio.h>
int count(int num){
    if(num==0){
        return 0;
    };
    return (num % 10)/(num % 10) + count(num / 10);
}
int main(){
    int num;
    printf("Type the number: ");
    scanf("%d",&num);
    printf("%d\n",count(num));
}