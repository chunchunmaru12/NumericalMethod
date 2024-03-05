//LAB 5: IMPLEMENTATION OF NUMERICAL INTEGRATION USING 
// 1. TRAPEZOIDAL METHOD
// 2. SIMPSON 1/3 METHOD
// 3. SIMPSON 3/8 METHOD
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
        k= lower_limit+i*step_size;
        integral+= 2*f(k);
    }
    integral *= (step_size/2);
    printf("Result: %.3f",integral);

}