//sum of vectors
#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector addvectors(struct vector v1,struct vector v2){
struct vector result;
result.x= v1.x+v2.x;
result.y=v1.y+v2.y;
return result;
}
int main() {
struct vector v1,v2,sum;

printf("enter x and y components of first vector");
scanf("%d %d",&v1.x,&v1.y);

printf("enter x and y components of second vector");
scanf("%d %d",&v2.x,&v2.y);

sum = addvectors(v1,v2);
printf("sum of vector: (%d,%d)\n",sum.x,sum.y);
return 0;
}