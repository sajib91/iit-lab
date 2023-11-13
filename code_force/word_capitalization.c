#include <stdio.h>
#include <math.h>

double power1(double x);

double main(void){
    double n;
    printf("Enter your number: ");
    scanf("%f",&n);
    
    double p = power1(n);
    printf("Square of %f : %.2f",n,p);
   
}

double power1(double x){
    double temp = pow(x,2.0);
    return temp;
}