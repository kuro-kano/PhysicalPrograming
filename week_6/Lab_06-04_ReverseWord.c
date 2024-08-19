#include <stdio.h>

int main() {
    char text[101] = {"\0"};
    scanf("%[^\n]", text);
    int len;
    for (len = 0; len < 101; len++){
        // printf("%c", text[len]);
        if (text[len] == '\0'){
            break;
        }
    }

    for (int i = len; i >= 0; i--) {
        printf("%c", text[i]);
    }

    return 0;
}
