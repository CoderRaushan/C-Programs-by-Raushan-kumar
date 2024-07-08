#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Define the function to be approximated
double f(double x) {
    return sin(x);
}

// Compute the Fourier coefficient for the nth term
double fourier_coef(int n) {
    double sum = 0;
    double x;
    for (x = 0; x < 2 * PI; x += 0.01) {
        sum += f(x) * cos(n * x);
    }
    return sum * 0.01 / PI;
}

// Compute the Fourier series approximation up to the nth term
double fourier_series(double x, int n) {
    double sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum += fourier_coef(i) * cos(i * x);
    }
    return sum;
}

int main() {
    double x;
    for (x = 0; x < 2 * PI; x += 0.01) {
        printf("%f %f\n", x, fourier_series(x, 5));
    }
    return 0;
}