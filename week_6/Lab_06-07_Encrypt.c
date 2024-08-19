#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encode(char alp){
    char alpha;
    char encrypt [] = "QPYXBAIWGZVFUTHSOJLKDECNMR";
    for (int j=0; j<strlen(encrypt);j++){
        if (alp == encrypt[j]){
            alpha = encrypt[((j + 5) % 26)];
        }
    }

    return alpha;
}

int main(){
    char text[201] = {"\0"}, new_text[201] = {"\0"};
    char research;

    scanf("%[^\n]s", text);
    int len = strlen(text);
    int i = 0;

    for (i = 0; i < len; i++){
        research = text[i];
        if (research == ' '){
            new_text[i] = ' ';
            continue;
        }

        if (islower(research)){
            new_text[i] = tolower(encode(toupper(research)));
        } else {
            new_text[i] = encode(toupper(research));
        }
    }

    for (int p=0; p<strlen(new_text); p++){
        printf("%c", new_text[p]);
    }

    return 0;
}
