#include <stdio.h>

int main(){
    char num[5];
    scanf("%s", &num);
    printf("%-5.1s%75s", num, "");
    printf("%1s%-5.2s%74s", "", num, "");
    printf("%2s%-5.3s%73s", "", num, "");
    printf("%3s%-5.4s%72s", "", num, "");
    printf("%4s%-5s%71s", "", num, "");
    return 0;
}