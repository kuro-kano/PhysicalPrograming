#include <stdio.h>
// 123 132 213 231 312 321
int main(){
    double num1, num2, num3;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 & num2 >= num3){
        printf("%.2f", num2);
    } else if (num1 >= num3 & num3 >= num2){
        printf("%.2f", num3);
    } else if (num2 >= num1 & num1 >= num3){
        printf("%.2f", num1);
    } else if (num2 >= num3 & num3 >= num1){
        printf("%.2f", num3);
    } else if (num3 >= num1 & num1 >= num2){
        printf("%.2f", num1);
    } else if (num3 >= num2 & num2 >= num1){
        printf("%.2f", num2);
    }

    return 0;
}