#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    if (m >= n){
        while (n <= m){
            printf("%d ", m); m--;
        }
    } else {
        while (n >= m){
            printf("%d ", m); m++;
        }
    }

    return 0;
}
