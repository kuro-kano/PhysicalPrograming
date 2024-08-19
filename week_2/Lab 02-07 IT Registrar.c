#include <stdio.h>

int main()
{
    char name[30], surname[30];
    char id[8];
    int date, month, year;
    float gpa;
    scanf("%s %s %s", &name, &surname, &id);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%02d\n", date, month, year);
    printf("GPA: %.2f", gpa);
    return 0;
}
