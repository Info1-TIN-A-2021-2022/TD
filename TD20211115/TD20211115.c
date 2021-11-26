/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211115/TD20211115.c
    Created on: 2021-11-15 12:28:38
    by:         πR

    Description loops
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
#if 0

  int n = 0;
  bool first_time = true;
/*
  printf("n=%d\n", n);
  printf("%d\n", n = 5);
  printf("n=%d\n", n);
  printf("%d\n", n == 5);
  printf("n=%d\n", n);
  if (n = 5)
  {
    printf("OK");
  }
*/

  for (n = 0; n <= 100; n = n + 1)
  {
    if(n%2==0) {
      // if standard
      if(first_time==true) {
        printf("%d", n);
        first_time = false;
      }
      else {
        printf(", %d", n);
      }
    }
  }
  puts(".");
#endif
#if 0
  // l'utilisateur saisit un texte puis le termine avec ENTREE
  // l'application affiche alors le nombre de caractères saisis.
  // ex:    ./app 
  //          1234567890
  //        10
  // on ne compte pas le ENTREE

  char c = 0;
  size_t n = 0;
  bool finished = false;


  do {
    c = getchar();
    if(c=='\n') {
      finished = true;
    }
    else {
      n++; // n=n+1;
    }
  } while (finished==false);

  printf("n=%lu\n", n);
#endif

  // l'application reçoit un nombre entier en base 10 en argument maximum sur 16 bits.
  // elle affiche sa valeur en base 8 (interdit d'utiliser %o :)
  // don't forget : the memory contains values in binary :o)

  // ex: n=1000 en base 10
  //      = 3E8 en base 16
  //      = 1111101000 en base 2
  //      = 1 111 101 000 (regroupement par lots de 3 bits)
  //      = 1  7   5   0   en base 8


  // n =   13 en base 10
  //   = 00001101 en base 2
  // extraction du '1' de droite : n & 1
  //     00000001
  // n&1 00000001

  // extraction des 3 bits de droite : 
  // m   00000111
  // n&m 00000101

  // extraction des 3 bits placés immédiatement à gauche
  // m   00 111 000
  // n&m 00[001]000     00000[001]

  int n = 1000;
  int dec = 9;
  int mask = 7 << dec;

  for (; dec >= 0;dec-=3) {
    printf("%d", (n & mask) >> dec);
    mask >>= 3;
  }
  puts("");
  return 0;
}

















