#include <stdio.h>

int main(){
    float cost;
    int percent, amount;
    scanf("%f", &cost);
    scanf("%d %d", &percent, &amount);

    float free = (amount - (amount / 3)) * cost;
    float discount = cost * (amount * (1 - (percent / 100.0)));

    if (free < discount) {
        printf("Buy 2 Get 1\n%.2f", free);
    } else {
        printf("Discount %d%\n%.2f", percent, discount);
    }
}