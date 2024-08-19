#include <stdio.h>

int main(){
    char txt[5];
    scanf("%s", txt);
    printf("%c%c%c%c%c", txt[2], txt[3], txt[4], txt[0], txt[1]);
    return 0;
}