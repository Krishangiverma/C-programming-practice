//write a program to write all odd no from 1 to n in a file
#include<stdio.h>
void writeoddnumberstofile(int n);
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    writeoddnumberstofile(n);
    return 0;
}
void writeoddnumberstofile(int n) {
    FILE*fptr;
    fptr=fopen("odd_numbers.txt","w");
    if(fptr==NULL) {
        printf("error while opening file!\n");
        return ;
}
fprintf(fptr,"odd numbers from 1 to %d are: \n",n);
for(int i=1;i<=n;i++){
    if(i%2!=0){
        fprintf(fptr,"%d\n",i);
    }
}
printf("odd no. written to odd_numbers.txt\n ");
fclose(fptr);
}
