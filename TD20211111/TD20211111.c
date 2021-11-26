/*
    File:       ~/Documents/01-HEIG-VD/10-CLASSES/2021-2022/Info1-TIN-A/TD/TD20211111/TD20211111.c
    Created on: 2021-11-11 15:42:32
    by:         πR

    Description loops :=)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
#if 0
  // do...while(cond);
  int a = 0;
  do
  {
    printf("Enter a integer >0: ");
    scanf("%d", &a);

  } while (a <= 0);

  printf("a=%d\n", a);
#endif

#if 1
  int i = 1000;
  int n = 0;

  while(i!=0) {
  
    n += i & 1;
    i >>= 1;
  }
  printf("n=%d\n", n);
#endif


  return 0;
}