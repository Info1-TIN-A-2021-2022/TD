/*
    File:       ~/Documents/01-HEIG-VD/10-CLASSES/2021-2022/Info1-TIN-A/TD/TD20211125/TD20211125.c
    Created on: 2021-11-25 10:54:20
    by:         πR

    Description algo technics
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
#if 0
  double xmin = __DBL_MAX__;
  double xmax = -__DBL_MAX__;
  printf("%lf\n", xmin);
  printf("%lf\n", xmax);

  int ixmin = __INT_MAX__;
  int ixmax = __INT_MAX__;
  printf("%d\n", ixmin);
  printf("%d\n", ixmax);

  short sxmin = __SHRT_MAX__;
  printf("%hd\n", sxmin);
  unsigned char cxmin = __UINT8_MAX__;
  printf("%d\n", cxmin);
#endif

#if 0  // COUNT
  size_t count = 0;
  char c = 0;

  do {
    c = getchar();
    count += c == ' ';

  } while (c != '\n');

  printf("count=%lu\n", count);
#endif

#if 0
  double surface = 0.;
  double delta_t = 1.;
  double y = 0.;
  const double final_value = -1.;

  do
  {
    scanf("%lf", &y);
    if (y!=final_value) {
      surface += delta_t * y;
    }
  } while (y != final_value);

  printf("surface=%.1lf\n", surface);
#endif

  double xmin = 0.;
  double xmax = 0.;
  double x = 0.;
  bool finished = false;
  bool first_value = true;

  do
  {
    finished = (1 != scanf("%lf", &x));
    if(!finished) {
      if (first_value) {
        first_value = false;
        xmin = xmax = x;
      }
      else {
        xmin = x < xmin ? x : xmin;
        xmax = x > xmax ? x : xmax;
      }
    }
  } while (!finished);

  printf("xmin=%.1lf\n", xmin);
  printf("xmax=%.1lf\n", xmax);

  return 0;
}
