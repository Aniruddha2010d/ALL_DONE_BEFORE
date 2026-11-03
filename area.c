#include<stdio.h>
#include<math.h>
float arsqr(float b);
float arcir(float b);
float arrec(float a, float b);
int main(){
    char x;
    printf("Type c for Circle.\nType r for Rectangle.\nType s for Sqare.\n");
    scanf("%c",&x);
    if(x == 's'){
        float n;
        printf("Type the sides of the sqare: ");
        scanf("%f",&n);
        n = arsqr(n);
        printf("The area of sqare is %f",n);
    }else if(x == 'r'){
        float n;
        float m;
        float area;
        printf("Type the sides of the rectangle: ");
        scanf("%f",&n);
        scanf("%f",&m);
        area = arrec(n,m);
        printf("The area of sqare is %f",area);
    }else if(x == 'c'){
        float n;
        printf("Type the side of the circle: ");
        scanf("%f",&n);
        n = arcir(n);
        printf("The area of sqare is %f",n);
    }else{
        printf("Eror!!");
    }
    return 0;
}
float arsqr(float n){
    return n * n;
}
float arcir(float n){
    return 3.14 * n * n;
}
float arrec(float n, float m){
    return m * n;
}