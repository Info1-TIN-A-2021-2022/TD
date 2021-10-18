/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211018/TD20211018.c
    Created on: 2021-10-18 14:00:22
    by:         πR

    Description display with printf and formats
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char c = 'T'; // one 8b character
    int i = 42;
    int j = -37;
    float f = M_E; // 32b real value
    double d = M_PI; // 64b real value
    char *s = "Il fait beau et chaud.";
    char s2[] = "Il fait beau et chaud.";

    printf("TD20211018\n"); // simple text
    puts("TD20211018"); // same display ONLY TEXT !

    printf("i = [%d]\n", i);
    printf("i = [%8d]\n", i); 
    printf("i = [%+8d]\n", i); 
    printf("i = [%-8d]\n", i); 
    printf("i = [%-+8d]\n", i); 
    printf("i = [%+-8d]\n", i); 
    printf("i = [%08d]\n", i); 
    printf("j = [%d]\n", j);
    printf("j = [%8d]\n", j); 
    printf("j = [%+8d]\n", j); 
    printf("j = [%-8d]\n", j); 
    printf("j = [%-+8d]\n", j); 
    printf("j = [%+-8d]\n", j);

    puts("------");

    printf("c=[%d]\n", c);
    printf("c=[%c]\n", c);

    // c=[84] [T]
    printf("c=[%d] [%c]\n", c, c);

    // c=[84] [0x54] [T]
    printf("c=[%d] [0x%x] [%5c]\n", c, c, c);

    puts("------");

    printf("s=[%s]\n", s);
    printf("s=[%30s]\n", s);
    printf("s=[%-30s]\n", s);

    puts("*** Labo03.1 ***");
    printf("size of int = %lu\n", sizeof(int));
    printf("%-30s %lu\n", "size of short =", sizeof(short));
    printf("%-30s %lu\n", "size of int =", sizeof(int));

        puts("------");

    return 0;
}