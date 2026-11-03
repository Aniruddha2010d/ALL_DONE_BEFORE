#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    int i, vow =0, cons = 0;
    char ch;
    printf("Enter a string: ");
    scanf("%99s",&str);
    for(i=0;str[i]!= '\0';i++){
        ch = tolower((unsigned char)str[i]);
        if(ch == 'a'||ch == 'e'|ch == 'i'|ch == 'o'|ch == 'u'){
            vow++;
        }else{
            cons++;
        }
    }
    printf("Vowels = %d\n",vow);
    printf("Consonants = %d\n",cons);
    return 0;
}