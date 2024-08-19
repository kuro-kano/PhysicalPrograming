#include <stdio.h>

int sec;

int calc(int duration, int second){
    int amount;
    amount = second / duration;
    sec -=  amount * duration;
    return amount;
}

int main(){
    scanf("%d", &sec);
    printf("%d s = ", sec);
    int day, hours, minute, second;

    day = calc(86400, sec);
    hours = calc(3600, sec);
    minute = calc(60, sec);
    second = sec;

    printf("%d d %d h %d m %d s", day, hours, minute, second);

    return 0;
}