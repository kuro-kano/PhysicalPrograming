#include <stdio.h>

int main(){
    char eng;
    scanf("%c", &eng);

    if ((int) eng >= 97 & (int) eng <= 122){
        printf("%c", (int) eng - 32);
    } else if ((int) eng >= 64 & (int) eng <= 90){
        printf("%c", (int) eng + 32);
    } else {
        printf("error");
    }

    return 0;
}