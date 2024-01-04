#include<stdio.h>
#include<math.h>

float fn(float x){
       return (pow(x,3)+pow(x,2)-3*x-3);
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
        }
    printf("> ");
    scanf("%f %f",&x1,&x2);
    f1=fn(x1);
    f2=fn(x2);
    x=f1*f2;
    a++;
    }while(x>0);
    
    for(;;){
    x0= (x1+x2)/2;
    f0=fn(x0);
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
        printf("the root of given equation is: %f\n",x0);
        break;
    }  
}
return 1;
}