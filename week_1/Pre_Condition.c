#include <stdio.h>

int main(){
    double kilometer;
    scanf("%lf", &kilometer);

    // if (kilometer >= 58.855){
    //     kilometer -= 58.855;
    // }

    if (kilometer > 52.9 & kilometer <= 58.855){
        printf("Chon Buri");
    }
    else if (kilometer > 35.477 & kilometer <= 52.9){
        printf("Chachoengsao");
    }
    else if (kilometer > 5.032 & kilometer <= 35.477){
        printf("Samut Prakarn");
    }
    else if (kilometer >= 0 & kilometer <= 5.032){
        printf("Bangkok");
    }
    else {
        printf("InValid");
    }

    return 0;
}
