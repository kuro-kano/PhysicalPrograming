#include <stdio.h>
#include <ctype.h>

int main(){
    char alp;
    scanf("%c", &alp);

    if (isalpha(alp)){
        if (islower(alp)){
            printf("lowercase");
        } else if (isupper(alp)){
            printf("uppercase");
        } else {
            printf("error");
        }
    } else if (isalnum(alp)) {
        printf("number");
    } else {
        printf("error");
    }

    return 0;
}