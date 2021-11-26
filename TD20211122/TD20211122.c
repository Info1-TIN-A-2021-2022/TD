/*
    File:       ~/Documents/01-HEIG-VD/10-CLASSES/2021-2022/Info1-TIN-A/TD/TD20211122/TD20211122.c
    Created on: 2021-11-22 14:06:59
    by:         πR

    Description switch case
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  #if 0
  int c = 0;

  printf("Êtes vous d'accord ? ");
  c = getchar();

  switch(c) {

    case 'o':
    case 'O':
    case 'd':
    case 'D':
    case 'y':
    case 'Y':
      puts("OUI");
      break;
    case 'n':
    case 'N':
      puts("NON");
      break;
    default:
      puts("BOF");
      break;
    }
#endif

#if 1
  int n = 0;

  printf("Nombre de voiture(s) : ");
  scanf("%d", &n);

  printf("%d voiture%s", n, n > 0 ? "s" : "");
  puts("");
#endif

  return 0;
}
