#include <iostream>
#include <cmath>

double f(double x) {
    return x*x*x-18*x-83;
}

double findRoot(double a, double b, double epsilon) {
    double tmp = b;
    while (abs(tmp - a) > epsilon) {
        tmp = a;
        a = a - (a - b) * f(a) / (f(a) - f(b));
    }

    return a;
}

int main() {
    std::cout << findRoot(3, 8, 0.001);
    return 0;
}