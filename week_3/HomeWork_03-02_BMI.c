#include <stdio.h>

int main(){
    float height, weight, bmi;
    scanf("%f %f", &height, &weight);
    // bmi = weight / (pow (height / 100, 2));
    height /= 100;
    bmi = weight / (height * height);
    printf("%f", bmi);

    return 0;
}
