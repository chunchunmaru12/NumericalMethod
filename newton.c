#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (pow(x,3)-2*x-5)
#define g(x) (3*pow(x,2)-2)
void main(){
    float x0,x1,f0,g0,e;
    int max,count;
    printf("Enter the stopping criteria: ");
    scanf("%f",&e);
    printf("Enter the max number of iterations: ");
    scanf("%d",&max);
    printf("\nEnter the initial guess: ");
    scanf("%f",&x0);
    do{
    f0=f(x0);
    g0=g(x0);
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
    }while(fabs(f(x1))>e);
    printf("You root is : %f",x1);
}