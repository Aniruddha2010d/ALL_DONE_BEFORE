#include<stdio.h>
#include<string.h>
int main(){
    char str1[11];
    char str2[11];
    printf("Type the first string: ");
    fgets(str1,11,stdin);
    printf("Type the second string: ");
    fgets(str2,11,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    str2[strcspn(str2,"\n")] = '\0';
    strcat(str1," ");
    strcat(str1,str2);
    puts(str1);
}