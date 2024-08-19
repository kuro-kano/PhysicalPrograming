#include <stdio.h>

int main(){
    double mat_1[3][3], mat_2[3][3];
    double result[3][3];

    for (int rows = 0; rows < 3; rows++){
        for (int cols = 0; cols < 3; cols++){
            scanf("%lf", &mat_1[rows][cols]);
        }
    }

    for (int rows = 0; rows < 3; rows++){
        for (int cols = 0; cols < 3; cols++){
            scanf("%lf", &mat_2[rows][cols]);
        }
    }

    for (int rows = 0; rows < 3; rows++){
        for (int cols = 0; cols < 3; cols++){
            result[rows][cols] = 0;
            for (int stat = 0; stat < 3; stat++) {
                result[rows][cols] += mat_1[rows][stat] * mat_2[stat][cols];
            }
        }
    }

    printf("A x B\n");
    for (int rows = 0; rows < 3; rows++){
        for (int cols = 0; cols < 3; cols++){
            printf("%.2lf ", result[rows][cols]);
        }
        printf("\n");
    }

    return 0;
}