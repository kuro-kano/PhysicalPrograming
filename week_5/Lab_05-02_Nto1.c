#include <stdio.h>

int main(){
    int num;
    scanf("%d ", &num);
    
    int i = num;

    while (i >= 1){
        printf("%d ", i); i--;
    }

    return 0;
}
