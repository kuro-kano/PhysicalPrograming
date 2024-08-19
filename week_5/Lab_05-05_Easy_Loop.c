#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if (num >= 0){
        while (num >= 0){
            printf("%d ", num); num--;
        }
    } else {
        while (num <= 0){
            printf("%d ", num); num++;
        }
    }

    return 0;
}
