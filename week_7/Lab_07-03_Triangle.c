#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c);
double area(double a, double b);

int main(){
    double a, b, c;
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);

    double peri = perimeter(a, b, c);
    double are = area(a, b);

    printf("Perimeter: %.2lf\nArea: %.2lf", peri, are);

    return 0;
}

double perimeter(double a, double b, double c){
    return a + b + c;
}

double area(double a, double b){
    return a * b * 0.5;
}
