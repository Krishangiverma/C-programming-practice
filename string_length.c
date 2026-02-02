//make a program that inputs user name and print its length
#include<stdio.h>
#include<string.h>

void getname(char name[]) {
    printf("enter your first name: ");
    scanf("%s",name);
}
int getlength(char name[]){
    return strlen(name);
}
void printresult(char name[],int length) {
    printf("hello, %s\n",name);
    printf("length of your name is %d\n",length);
}
int main(){
    char name[50];
    int length;
    getname(name);
    length=getlength(name);
    printresult(name,length);
    return 0;
}
