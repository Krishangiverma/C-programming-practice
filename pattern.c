//print inverted pyramid
#include<stdio.h>
void printInvertedPyramid(int n) {
    for(int i=n;i>=1;i--){
        //print spaces
    for(int j=1;j<=n-i;j++){
printf(" ");
        }
        //printstars
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);

    printInvertedPyramid(rows);
    return 0;
}