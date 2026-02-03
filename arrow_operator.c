//create a structure to store complex numbers(use arrow operator)
#include<stdio.h>
#include<stdlib.h>
struct complex{
    float real;
    float imag;
} ;
void display(struct complex *c) {
    printf("complex no: %.2f+%.2fi\n",c->real,c->imag);
}
int main() {
    struct complex *num;
    num=(struct complex*) malloc(sizeof(struct complex));
    printf("enter real part: ");
    scanf("%f",&num->real);
    printf("enter imaginary part: ");
    scanf("%f",&num->imag);
    display(num);
    free(num);
}