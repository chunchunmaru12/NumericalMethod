#include <stdio.h>
#include <math.h>

// Define the function for which you want to calculate the derivative
double myFunction(double x) {
    return x * x; // Example function x^2
}

// Numerical differentiation function
double calculateDerivative(double (*function)(double), double x, double h) {
    return (function(x + h) - function(x)) / h;
}

int main() {
    double x; // Point at which to calculate the derivative
    double h = 0.0001; // Step size for numerical differentiation

    // Calculate the derivative
    double derivative; 
    for(x=0.0;x<10.0;x++){
        derivative=calculateDerivative(myFunction, x, h);
        printf("The derivative at x = %.2f is %.5f\n", x, derivative);
    }
    return 0;
}
