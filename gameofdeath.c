#include<stdio.h>
int lastman1(int arr[],int len);
int lastman2(int arr[],int len);
int main(){
    int num;
    printf("Type the number of persons: ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0;i<num;i++){
        arr[i] = i+1;
    };
    if(num%2 ==0){
        printf("The last man is %d th one", lastman1(arr,num));
    }
    else{
        printf("The last man is %d th one", lastman2(arr,num));
    }
}
int lastman1(int arr[],int len){
    if(arr[0]==0 && len == 2){
        return arr[1];
    }
     //arr[]= {1,2,3,...,n even}
    int i = 0;
    while(i < len){
        arr[i+1] = 0;
        i+= 2;
    };
    int newarr[len - (i/2)];
    int b = 0;
    i = 0;
    while(i < len){
        if(arr[i]!=0){
            newarr[b] = arr[i]; 
            b++;
        };
        i++;
    };
    if(b%2  == 0){
        lastman1(newarr,b);
    }else{
        lastman2(newarr,b);
    }
}
int lastman2(int arr[],int len){
    if(len == 1){
        return arr[0];
    }
    //arr[]= {1,2,3,...n odd}
    int i = 0;
    while(i < len){
        arr[i+1] = 0;
        i+= 2;
    };
    int newarr[len - (i/2)+1];
    newarr[0]=0;
    int b = 1;
    i = 0;
    while(i<len){
        if(arr[i]!=0){
            newarr[b] = arr[i];
            b++;
        };
        i++;
    };
    if(b%2  == 0){
        lastman1(newarr,b);
    }else{
        lastman2(newarr,b);
    }
}