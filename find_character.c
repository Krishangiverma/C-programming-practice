//check if given character is present in string or not
#include<stdio.h>
int main() {
    char str[100],ch;
    int found=0;
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter a character to search: ");
    scanf(" %c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch) {
            found=1;
             break;
        }
        }
        if(found)
        printf("character '%c' is present in string\n",ch);
        else
        printf("character '%c' is not present in string\n",ch);
        return 0;
    }
