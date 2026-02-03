//find all roots of a quadratic equation using function
#include<stdio.h>
#include<math.h>

void findroots(float a, float b,float c){
    float d, root1, root2,realpart, imagpart;

    d=b*b-4*a*c;

    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
printf("roots are real and different\n");
printf("root1=%.2f and root2=%.2f\n",root1,root2);
    } 
    else if(d==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal\n");
        printf("root1=root2=%.2f\n",root1);
    }
    else {
        realpart= -b/(2*a);
        imagpart= sqrt(-d)/(2*a);

        printf("roots are complex and different\n");
        printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi\n",realpart,imagpart,realpart,imagpart);
    }
    }
    int main(){
        float a,b,c;
        printf("enter coefficients a,b and c: ");
        scanf("%f %f %f",&a,&b,&c);
        if(a==0){
            printf("not a quadratic equation\n");
        } else {
            findroots(a,b,c);
        }
        return 0;
    }
