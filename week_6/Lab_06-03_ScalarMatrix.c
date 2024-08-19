#include <stdio.h>

int main(){
    double a[3][3];

    for (int rows = 0; rows < 3; rows++){
        for (int cols = 0; cols < 3; cols++){
            scanf("%lf", &a[rows][cols]);
        }
    }

    if (a[0][0] == a[1][1]&& a[1][1] == a[2][2] && a[0][1] == 0 \
    && a[0][2] == 0 && a[1][0] == 0 && a[1][2] == 0 \
    && a[2][0] == 0 && a[2][1] == 0){
        printf("This is a scalar matrix");
    }
    else {
        printf("This is not a scalar matrix");
    }
}