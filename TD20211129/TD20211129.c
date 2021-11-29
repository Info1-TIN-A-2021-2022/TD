/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211129/TD20211129.c
    Created on: 2021-11-29 14:00:43
    by:         πR

    Description function
*/

#include <stdio.h>

// prototype of my functions
void f1(void);
void f2(int x);
void f3(int x, float f);
double f4(int t);

int main(int argc, char const *argv[])
{
  int k = 42;
  double result = 0.;
  f1();
  f2(56);     // the value 56 is given to f2 as parameter x
  f2(k);      // the value of k (42) is given to f2 as parameter x
  f3(5, 3.14);
  result = f4(k); // result receives the output of f4
  printf("result=%lf\n", result);
  return 0;
}

// compute 2 times the t value and return the result
double f4(int t) {
  double r = 0.;
  r = t * 2.01;
  return r; // r is the output of the function
}

// f3: display x times the value of f (very useful)
void f3(int x, float f) {
  int k = 0;
  for (k = 0; k < x; k++) {
    printf("%.2f\n", f);
  }

  // other methods :
  // 1. create the counter within the for loop (not recommended due to memory needs evaluation not easy)
  // for (int z=0; z<x;z++) {...}
  // 2. use the x variable as the counter. Drawback: x value is changed by the end.
  // for(;x>0;x--) {}
    return;
}

// f2:  display the integer value given as parameter.
void f2(int x) {
  printf("x=%d\n", x);
  return;
}

void f1(void) {
  puts("Hello World.");
  return;
}

