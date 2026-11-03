#include<stdio.h>
#include<stdbool.h>
int main() 
{
    int d = 1;
    int i=1;
    int r;
    int k = 1;
    bool prime;
    printf("Type maximum range: ");
    scanf("%d",&r);
    while(i<=r){
        while(k<=d){
        
            if(d % k == 0){
                prime = false;
        }else{
            prime = true;
        };
        if(prime){
            printf("%d\n",d);
        };
        k++;
        d++;
        };
        i++;
    };

}