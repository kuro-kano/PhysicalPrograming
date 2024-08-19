#include <stdio.h>

int main(){
    double  length, width;
    scanf("%lf %lf", &length, &width);

    printf("Perimeter of rectangle = %.4f units", (length + width) * 2);

    return 0;
}
