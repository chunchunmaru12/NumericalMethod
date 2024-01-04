#include <stdio.h>
#include<math.h>
#define f(x) (pow(x,3)+pow(x,2)-3*x-3);

void main(){
    float e,f1,f2,x1,x2,x0,f0;
    printf("Enter the stopping criteria: ");
    scanf("%f",&e);
    do{
        printf("Enter the inital guessess: ");
        scanf("%f %f",&x1,&x2);
        f1=f(x1);
        f2=f(x2);
    }while(f1*f2>0);
    do{
    x0= x1-((f1*(x2-x1))/(f2-f1));
    f0=f(x0);
    if(f1*f0<0){
        x2=x0;
        f2=f0;
    }else{
        x1=x0;
        f1=f0;
    }
    }while(fabs(f0)>e);
    printf("Your root is : %f",x0);

}