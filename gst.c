#include<stdio.h>
float gst(float price1);
int main(){
    float price1;
    printf("Type the cost: ");
    scanf("%f",&price1);
    printf("The cost was: %.2f\n",price1);
    gst(price1);
    return 0;
}
float gst(float price1){
    price1 = price1 * 1.18;
    printf("The final cost is %.2f",price1);
}