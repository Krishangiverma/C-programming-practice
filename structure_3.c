//make a program to input student information from a user and enter it to a file
#include<stdio.h>
typedef struct{
    char name[50];
    int roll;
    float marks;
} student;
int main(){
    student s;
    FILE*fptr;
    fptr=fopen("students.txt","a");
    if(fptr==NULL){
        printf("error opening file!\n");
        return 1;
    }
    printf("enter students name: ");
        scanf(" %[^\n]", s.name);  // fixed: allows spaces in name


    printf("enter roll number: ");
     scanf("%d",&s.roll);

  printf("enter marks: ");
  scanf("%f",&s.marks);

  fprintf(fptr,"name: %s\n roll: %d\n marks: %.2f\n\n",s.name,s.roll,s.marks);
  printf("student data saved to file\n");

  fclose(fptr);
  return 0;
}
