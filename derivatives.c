#include <stdio.h>
#include <math.h>
double myFunction(double x) {
    return x * x;
}

double calculateDerivative(double (*function)(double), double x, double h) {
    return (function(x + h) - function(x)) / h;
}

int main() {
    double x;
    double h = 0.0001;
    double derivative; 
    for(x=0.0;x<10.0;x++){
        derivative=calculateDerivative(myFunction, x, h);
        printf("The derivative at x = %.2f is %.5f\n", x, derivative);
    }
    return 0;
}
