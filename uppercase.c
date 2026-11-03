#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%99s",str);
    for(i = 0;str[i]!='\0';i++){
        str[i]= toupper((unsigned char)str[i]);
    }
    printf("Uppercase = %s",str);
    return 0;
}