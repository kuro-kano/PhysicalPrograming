#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define GRAVITY 9.81

double DegreeToRadius(int degree);
double SinResult(double radius);

int main(){
    int degree, velocity;
    scanf("%d %d", &degree, &velocity);

    double h;

    h = (pow(velocity, 2) * SinResult(DegreeToRadius(degree))) / (2 * GRAVITY);

    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", degree, velocity, h);

    return 0;
}

double DegreeToRadius(int degree){
    return (degree * PI) / 180;
}

double SinResult(double radius){
    return pow(sin(radius), 2);
}
