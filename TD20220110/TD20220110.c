/*
    File:       /workspaces/Info1-TIN-A/TD/TD20220110/TD20220110.c
    Created on: 2021-12-20 13:30:04
    by:         πR

    Description TD20220110 - break et continue
*/

#include <stdio.h>
#include <string.h>

// EXERCICE TABLEAUX 2D
#if 0
#define W 5
#define H 2

void display(int t[][W], size_t height, size_t width)
{
  size_t index_h = 0;
  size_t index_w = 0;

  for (index_h = 0; index_h < height; index_h++)
  {
    for (index_w = 0; index_w < width; index_w++)
    {
      printf("t[%2lu][%2lu] = %5d\n", index_h, index_w, t[index_h][index_w]);
    }
    puts("");
  }
  return;
}

int main(int argc, char const *argv[])
{
  int t1[H][W] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10}};

  display(t1, H, W);
  return 0;
}
#endif

// EXERCICE TABLEAU 1D
#if 0
#define N 10

void display(int *t, size_t n) {
  size_t index = 0;
  for (index = 0; index < n;index++) {
    printf("t[%2lu] = %5d\n", index, *(t+index) );
  }
  return;
}

void gain(int t[], const size_t n, const int factor) {
  size_t index = 0;
  for (index = 0; index < n;index++) {
    t[index] *= factor;
  }
  return;
}

int main(int argc, char const *argv[])
{
  int t1[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  display(t1, N);
  gain(t1, N, 3);
  display(t1, N);

  return 0;
}
#endif

// EXERCICE DIMENSION TABLEAUX 1D
#if 0

#define N 10

int main(int argc, char const *argv[])
{
  int t1[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Table size in bytes : %ld\n", sizeof(t1));
  printf("Cell size in bytes  : %ld\n", sizeof(int));
  printf("Number of cells     : %ld\n", sizeof(t1) / sizeof(int));

  double t2[] = {1, 2, 3, 4, 5, 6};
  printf("Table size in bytes : %ld\n", sizeof(t2));
  printf("Cell size in bytes  : %ld\n", sizeof(double));
  printf("Number of cells     : %ld\n", sizeof(t2) / sizeof(double));

  return 0;
}
#endif

// EXERCICE A DECORTIQUER : continue et break
#if 1
int main(int argc, char const *argv[])
{
  char *s = "HAPPY NEW YEAR";
  int index = 0;
  int count = 0;

  for (index = 0; index < strlen(s); index++)
  {
    printf("\n[%c] ", *(s + index));
    if (*(s + index) == ' ')
    {
      printf("   continue...");
      continue; // jump to the end of the block
    }
    printf("   count++...");
    count++;

    if (*(s + index) == 'W')
    {
      printf("   break...");
      break; // exit from the loop
    }

    // end of loop's block
  }

  printf("count=%d\n", count);
  return 0;
}
#endif