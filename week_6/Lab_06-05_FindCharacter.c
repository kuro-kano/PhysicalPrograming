#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[301] = {"\0"};
    scanf("%[^\n]s", &text);

    char search;
    scanf(" %c", &search);

    int index[301] = {0}, counter = 0, pos = 0;

    for (int i = 0; i < strlen(text); i++){
        int alp = (int) tolower(text[i]);
        if (alp == (int) tolower(search)){
            index[pos] = i+1; counter++; pos++;
        }
    }

    if (counter){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", counter, search);
        for (int i = 0; i < pos; i++){
            if (i == counter - 1){
                printf("%d", index[i]);
            } else {
                printf("%d, ", index[i]);
            }
        }
    } else {
        printf("Not found.");
    }

    return 0;
}
