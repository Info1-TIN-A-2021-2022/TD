/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211220/TD20211220.c
    Created on: 2021-12-20 13:30:04
    by:         πR

    Description TD20211220
*/

#include <stdio.h>

#define H 5  // height
#define W 5  // width


int main(int argc, char const *argv[])
{
  char t[H][W];
  size_t l = 0;
  size_t c = 0;

  for (l = 0; l < H;l++) {
    for (c = 0; c < W;c++) {
      t[l][c] = l== c || c == W - l - 1 ? 'X' : '.';
    }
  }
  for (l = 0; l < H;l++) {
    for (c = 0; c < W;c++) {
      putchar(t[l][c]);
    }
    puts("");
  }
    return 0;
}

#if 0
#define NUM_MEASURES 4

int main2(int argc, char const *argv[])
{
  size_t k = 0;
  double measure[NUM_MEASURES];
  double sum = 0.;
  double mean = 0.;

  for (k = 0; k < NUM_MEASURES; k++)
  {
    printf("Enter the measure #%lu:",1+k);
    scanf("%lf", &(measure[k]));
  }

  for (k = 0; k < NUM_MEASURES;k++) {
    printf("Measure #%lu: %+6.2lf\n",1+k,measure[k]);
  }

  sum = 0.;
  for (k = 0; k < NUM_MEASURES; k++)
  {
    sum+=measure[k];
  }
  mean = sum / NUM_MEASURES;
  printf("Mean=%+6.2lf\n", mean);
  
  return 0;
}

#endif
