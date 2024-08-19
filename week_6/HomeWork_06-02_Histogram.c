#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);

    int frequency[26] = {0};
    char order[26] = {0};
    int index = 0;

    for (int i = 0; i < n; i++) {
        char alp;
        scanf(" %c", &alp);
        char lower_char = tolower(alp);
        if (lower_char >= 'a' && lower_char <= 'z') {
            int pos = lower_char - 'a';
            if (frequency[pos] == 0) {
                order[index] = lower_char;
                index++;
            }
            frequency[pos]++;
        }
    }

    for (int i = 0; i < index; i++) {
        printf("%c: %d\n", order[i], frequency[(int) order[i] - 'a']);
    }

    return 0;
}
