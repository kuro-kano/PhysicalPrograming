#include <stdio.h>

int main(){
    double cost, discount, amount;
    scanf("%lf %lf %lf", &cost, &discount, &amount);

    printf("%.2f", (cost * amount) * (1 - (discount / 100)));

    return 0;
}
