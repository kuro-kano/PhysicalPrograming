#include <stdio.h>

int indexing(int num, int *lst){
    int i = 0;
    for (i=0; i < sizeof lst; i++){
        if (num == lst[i]){
            break;
        }
    }
    return i;
}

int main(){
    int M [] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N [] = {1, 3, 9, 7, 11, 15, 19};

    int num;
    scanf("%d", &num);

    while (1){
        if (num < 1 || num > 20){
            scanf("%d", &num);
            continue;
        }

        else if (num == 17 || num == 14 || num == 13 || num == 12 || num == 5){
            printf("%d is not in neither M nor N", num);
        } else if (num % 2 == 0){ // lst M
            printf("%d is in M at index [%d]", num, indexing(num, M));
        } else if (num % 2 == 1){ // lst N
            printf("%d is in N at index [%d]", num, indexing(num, N));
        }
        break;
    }

    return 0;
}
