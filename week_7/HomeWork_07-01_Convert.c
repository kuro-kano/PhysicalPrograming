#include <stdio.h>
#include <string.h>
#include <ctype.h>

char lowercase(char alp);
char uppercase(char alp);
char StringCompare(char *name1, char *name2);
void toString(char *name1, char *name2, int same);
void printName(char *name);

int main(){
    char name1 [102] = "\0", name2 [102] = "\0";
    scanf("%[^\n]", &name1);
    scanf(" %[^\n]", &name2);

    // name1
    char new_name1 [102] = "\0";
    char lenght1 = strlen(name1);
    for (int i = 0; i < lenght1; i++){
        char alp = name1[i];
        if (islower(alp)){
            alp = uppercase(alp);
        } else {
            alp = lowercase(alp);
        }
        new_name1[i] = alp;
    }

    // name2
    char new_name2 [102] = "\0";
    char lenght2 = strlen(name2);
    for (int i = 0; i < lenght2; i++){
        char alp = name2[i];
        if (islower(alp)){
            alp = uppercase(alp);
        } else {
            alp = lowercase(alp);
        }
        new_name2[i] = alp;
    }

    new_name1[lenght1+1] = '\0'; new_name2[lenght2+1] = '\0';

    int condition = 1, lenght = strlen(new_name1);
    if (strlen(new_name1) == strlen(new_name2)){
        for (int i = 0; i < lenght; i++){
            if (tolower(name1[i]) != tolower(name2[i])){
                condition = 0; break;
            }
        }
    } else {
        condition = 0;
    }

    toString(new_name1, new_name2, condition);

    return 0;
}

char uppercase(char alp){
    return toupper(alp);
}

char lowercase(char alp){
    return tolower(alp);
}

void printName(char *name){
    for (int i = 0; i < strlen(name); i++){
        printf("%c", name[i]);
    } printf("\n");
}

void toString(char *name1, char *name2, int same){
    printf("*** Results ***\n");
    printName(name1); printName(name2);
    printf("***************\n");
    if (same){
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }
}