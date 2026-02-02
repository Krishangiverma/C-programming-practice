//check whether a given year is a leap year or not
#include<stdio.h>
int main() {
    int year;
    printf("enter a year :");
    scanf("%d",&year);
    if(year % 4==0 && year % 100 !=0) {
    printf("the year is a leap year\n");
    } else{
    printf("the year is not  aleap year\n");
    }
    return 0;
}