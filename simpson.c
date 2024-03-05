#include <stdio.h>
#include <math.h>
#define f(x) (1/(1+pow(x,2)));
void main(){
    float lower_limit,upper_limit,step_size,integral,sub_interval,k;
    printf("Enter n:");
    scanf("%f",&sub_interval);
    printf("Enter lower limit: ");
    scanf("%f",&lower_limit);
    printf("Enter upper limit: ");
    scanf("%f",&upper_limit);
    step_size = (upper_limit - lower_limit)/sub_interval;
    integral= f(lower_limit) + f(upper_limit);
    for(int i=1;i<sub_interval;i++){
        k = lower_limit+i*step_size;
        if(i%2==0){
            integral+= 2*f(k);
        }else{
            integral+= 4*f(k);
        }
    }
    integral *= (step_size/3);
    printf("Result: %.3f",integral);

}