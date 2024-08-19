#include <stdio.h>
#include <math.h>

int main(){
    float PI = 3.14159265359;
    double cost, diameter, height, volume, ml;
    scanf("%lf %lf %lf", &cost, &diameter, &height);

    volume = height * PI * (pow (diameter / 2, 2));
    ml = cost / volume;

    printf("Volume : %.2fml\nBaht/ml : %.4f", volume, ml);

    return 0;
}
