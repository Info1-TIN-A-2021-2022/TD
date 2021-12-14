#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#if 0
void process(double a, double *p);

int main(int argc, char const *argv[])
{
  double x = 27.0;
  double y = 0.;

  printf("x  =%16.2lf     &x=%p\n", x, &x);
  printf("y  =%16.2lf     &y=%p\n", y, &y);

  process(x, &y);
  printf("y =%16.2lf\n", y);
  return 0;
}

void process(double a, double *p) {

  printf("a  =%16.2lf     &a=%p\n", a, &a);
  printf("p  =  %p     &p=%p\n", p, &p);
  *p = cbrt(a);
  return;
}


#endif

#if 1

int fonction(int a, int * b, int * c, int * d)
{
    a = a << *b;
    *b = a++;
    *c *= -1;
    d = c-1; 
    return *d; 
}

int main()
{
    int i = 2, j = 3, k = 4, m = 5, n = 6;
    n = fonction(i, &j, &k, &m);
    printf("i:%d, j:%d, k:%d, m:%d, n:%d\n", i, j, k, m, n);
}



#endif