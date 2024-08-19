#include <stdio.h>

int main(){
    int summary = 0;
    int input;
    scanf("%d", &input);

    while (input != -9){
        summary += input;

        scanf("%d", &input);
    }

    printf("%d", summary);

    return 0;
}
