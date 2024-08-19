#include <stdio.h>

int main(){
    int i, j;
    int size; scanf("%d", &size);

    for (i=0; i<=size-1; i++){
        for (j=0; j<=size-1; j++){
            if ((i == j) || (j == (size-1)-i)){
                printf("-");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}