#include <stdio.h>

int main(){
    float num1, num2, num3, num4;
    float summary, average;
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    summary = num1 + num2 + num3 + num4;
    average = summary / 4;

    printf("Summation is %.2f\nAverage is %.3f", summary, average);

    return 0;
}
