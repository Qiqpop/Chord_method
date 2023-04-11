#include <iostream>
#include <cmath>

double f(double x) {
    return x*x*x-18*x-83;
}

double findRoot(double a, double b, double epsilon) {
    while (abs(b - a) > epsilon) {
        a = a - (b - a) * f(a) / (f(b) - f(a));
        b = b - (a - b) * f(b) / (f(a) - f(b));
    }

    return b;
}

int main() {
    std::cout << findRoot(3, 8, 0.001);
    return 0;
}