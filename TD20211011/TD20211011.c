/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211011/TD20211011.c
    Created on: 2021-10-11 13:24:34
    by:         πR

    Description Variables, const, operator, display and get values
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // reel : x, valeur init: π
    // entier : count, valeur initiale: 0
    // entier non signé: index, valeur initiale: 0 
    // valeur max: le maximum que le processeur adresse

    double x = M_PI;
    int count = 0;
    size_t index = 0;

    // entier >=0: z, valeur initiale: 0
    unsigned int z = 0;

    // entier 8 bits: c, valeur initiale: 'A' ou 65 (code ASCII de 'A')
    char c = 'A';

    // constante réelle: g, valeur initiale = 9.81
    // constante réelle: g_moon, valeur initiale = g/6
    const double g = 9.81;
    const double g_moon = g / 6.;

    // constante entière sur 8 bits: d, valeur initiale: 4
    const char d = 4;

    // affectation, opérations
    c = 66;
    c = '0';
    c = 'A'-d;

    // impossible de modifier les constantes => ne compile pas !
    //g = g / 6.; // fly me to the moon


    // soustraire 1 à index ; évaluer le résultat dans le debugger
    index = index - 1; // warning: index is unsigned

    // soustraire 1 à count ; évaluer le résultat dans le debugger
    count = count - 1;

    // autres écritures
    count -= 1;
    index += 5; // index=index+5;
    x *= 4.1;   // x=x*4.1;

    // mettez la valeur 1/3 dans x. Vérifiez le résultat dans le debug
    x = 1. / 3.;  // mettre un . après les constantes littérales réelles



    // ------------------------------------------------------------

    printf("Hello");
    printf(" ");
    printf("World");
    printf("\n");

    printf("Hello world\n"); //     \n  = newline

    puts("Hello World"); // add automatically a \n

    // ------------------------------------------------------------

    count = 42;
    printf("Value of count: %d\n", count); // %d => decimal integer value of count

    printf("Value of x: %lf\n", x); // %lf => decimal double

    // ------------------------------------------------------------

    printf("x=");
    scanf("%lf", &x); // %lf => decimal double    !!! don't forget the &
    printf("Value of x: %lf\n", x); // %lf => decimal double


    return 0;
}