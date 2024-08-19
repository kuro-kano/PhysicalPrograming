#include <stdio.h>

int main(){
    int i, counter;
    scanf("%d", &counter);
    for (i = 1; i <= counter; i++){
        if (i % 3 == 0){
            printf("Fizz");
        } if (i % 5 == 0){
            printf("Buzz");
        } else if (i % 3 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
}
