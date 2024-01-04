#include<stdio.h>
#include<math.h>

float function(float x){
       return (pow(x,3)+pow(x,2)-3*x-3);
    // return (cos(x) - (x*exp(x)));
    // return exp(cos(x))-sin(x)-1;
}
int main(){
    float x1,x0,x2,f0,f1,f2,e;
    printf("Enter stopping criteria: ");
    scanf("%f",&e);
    float x;
    int a=1;
    do{
        if(a>1){
            printf("Initial guess is wrong try again \n");
        }while(x>0);
    printf("> ");
    scanf("%f %f",&x1,&x2);
    x=function(x1)*function(x2);
    a++;
    }while(x>0);
    f1=function(x1);
    f2=function(x2);
    while(1){
    x0= x1-((f1*(x2-x1))/(f2-f1));
    f0=function(x0);
    if(f1*f0<0){
        x2=x0;
        f2=f0;
    }else{
        x1=x0;
        f1=f0;
    }
    float result =(x2-x1)/x2;
    if(result<0){
        result*=-1;
    }
    if(result<e){
        printf("%f",x0);
        break;
    }  
}
}