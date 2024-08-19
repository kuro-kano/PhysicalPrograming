#include <stdio.h>

int main(){
    // set output value
    int sum_age = 0, sum_height = 0, sum_weight = 0; // summary value
    int up_twen = 0, low_twen = 0, up_thirt = 0, low_fourt = 0; // Frequence of value

    // set using value
    int round;
    int age, height, weight; // value each round

    for (round = 50; round > 0; round--){
        scanf("%d %d %d", &age, &height, &weight);

        if (age >= 20 && height >= 160){
            up_twen += 1;
        } if (age < 20 && (height <= 180 || weight >= 60)){
            low_twen += 1;
        } if (age >= 30 && (weight <= 80 && weight >= 40)){
            up_thirt += 1;
        } if (age < 40 && (weight < 85 || height <= 200)){
            low_fourt += 1;
        }
        sum_age += age; sum_height += height; sum_weight += weight;
    }

    int avg_age = sum_age / 50;
    float avg_height = sum_height / 50.0, avg_weight = sum_weight / 50.0;

    printf("Age >= 20 and Height >= 160: %d\n", up_twen);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", low_twen);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", up_thirt);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", low_fourt);
    printf("Average Age: %d\n", avg_age);
    printf("Average Height: %.2f\n", avg_height);
    printf("Average Weight: %.2f", avg_weight);

    return 0;
}