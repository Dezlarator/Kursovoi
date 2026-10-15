#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

double Q(double X) {
    if (X < 140) {
        return (X - 140) * (X - 140) / 18.0 + 8;
    }
    else if (X <= 180) {
        return 2 * sqrt(X - 160 + 20) + 42;
    }
    else {
        return 3 * (X - 180) + 60;
    }
}

int main() {
	setlocale(LC_ALL, "Russian");
    double X;
    printf("¬ведите X: ");
    scanf("%lf", &X);
    printf("Q(%.2f) = %.4f\n", X, Q(X));
    return 0;
}