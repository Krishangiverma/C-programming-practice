//create a 2d array,storing tables of 2 and 3
#include<stdio.h>
int main() {
    int table[2][10];
    for(int i=0;i<10;i++) {
        table[0][i]=2*(i+1);
        table[1][i]=3*(i+1);
    }
    printf("table of 2: \n");
    for(int i=0;i<10;i++){
        printf("2*%d=%d\n",i+1,table[0][i]);
    }
    printf("table of 3: \n");
    for(int i=0;i<10;i++){
        printf("3*%d=%d\n",i+1,table[1][i]);
    }
    return 0;
}