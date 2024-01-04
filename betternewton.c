#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float function(float x){
       return (3*x-cos(x) -1);
}
float calculateDerivative(float (*function)(float), float x, float h) {
    return (function(x + h) - function(x)) / h;
}
void main(){
    float x0,x1,f0,g0,e;
    int max,count;
    printf("Enter the stopping criteria: ");
    scanf("%f",&e);
    printf("Enter the max number of iterations: ");
    scanf("%d",&max);
    printf("\nEnter the initial guessess: ");
    scanf("%f",&x0);
    do{
    f0=function(x0);
    g0=calculateDerivative(function, x0, 0.0001);
        if(g0==0){
            printf("Mathematical error");
            exit(1);
        }
        x1=x0-(f0/g0);
        x0=x1;
        count++;
        if(count>max){
            printf("divergent");
            exit(1);
        }
    }while(fabs(function(x1))>e);
    printf("You root is : %f",x1);
}