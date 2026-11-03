#include <stdio.h>
int main(){
    char str[100],ch;
    int i,count = 0;
    printf("Enter a string: \n");
    scanf("%99s",str);
    printf("Enter a character: \n");
    scanf("%c",&ch);
    for(i = 0;str[i] != '\0';i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("Frequency of %c is %d", ch, count);
    return 0;
}