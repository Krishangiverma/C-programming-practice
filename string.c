//ask the user to enter their first name and print it back to them
#include<stdio.h>
void getname(char name[]) {
    printf("enter your first name: ");
    scanf("%s",name);
}
void printname(char name[]){
    printf("hello %s\n",name);
}
int main(){
    char name[50];
    getname(name);
    printname(name);
}
