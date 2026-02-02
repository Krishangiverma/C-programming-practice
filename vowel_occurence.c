//write a function to count occurence of vowels in string
#include<stdio.h>
#include<string.h>
#include<ctype.h>//for tolower() function to handle uppercase letters
int countvowels(char str[]) {
    int count=0;
for(int i=0;str[i]!='\0';i++)
  {
char ch=tolower(str[i]);//tolower to treat both a and Aas same
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
    count++;
}
}
return count;
}
int main(){
    char str[100];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    int vowelcount=countvowels(str);
    printf("number of vowels:%d\n",vowelcount);
    return 0;
}