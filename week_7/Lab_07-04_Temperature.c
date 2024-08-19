#include <stdio.h>
#include <ctype.h>

double CelToFah(double cel);
double FahToCel(double fah);
void printFah(double fah);
void printCel(double cel);

int main(){
    double temp;
    char dir;
    scanf("%lf %c", &temp, &dir);

    char alp = tolower(dir);

    if (alp == 'c'){
        CelToFah(temp);
    } else {
        FahToCel(temp);
    }

    return 0;
}

double CelToFah(double cel){
    printFah(32 + cel * (1.8));
}

void printFah(double fah){
    printf("%.2lf f", fah);
}

double FahToCel(double fah){
    printCel((fah - 32) / 1.8);
}

void printCel(double cel){
    printf("%.2lf c", cel);
}
