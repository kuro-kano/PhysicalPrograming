#include <stdio.h>

int main(){
    char fname1[25], sname1[25];
    char fname2[25], sname2[25];
    char fname3[25], sname3[25];
    scanf("%s %s", &fname1, &sname1);
    scanf("%s %s", &fname2, &sname2);
    scanf("%s %s", &fname3, &sname3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fname2, sname2);
    printf("Person 3: %s %s", fname3, sname3);
    // printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", fname1, sname1, person2, person3);
    return 0;
}
