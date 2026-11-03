#include<stdio.h>
void printhw(int i);
void printhw(int i){
    if(i==0){
        return;
    }
    printf("Hello World\n");
    printhw(i-1);
}
int main(){
    printhw(5);
    return 0;
}