/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211101/TD20211101.c
    Created on: 2021-11-01 13:43:47
    by:         πR

    Description RGB to Lab

    Links: 
    RGB color:   https://www.rapidtables.com/web/color/RGB_Color.html
    Test values: http://colormine.org/convert/rgb-to-xyz
    Test values: http://colormine.org/convert/xyz-to-lab
    RGB to XYZ:  http://www.brucelindbloom.com/Eqn_RGB_to_XYZ.html 
    XYZ to Lab:  http://www.brucelindbloom.com/index.html?Eqn_XYZ_to_Lab.html


*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void usage(void) {

  puts("usage: convert the RGB to Lab).");
  puts("       app R G B");
  return;
}


// parameters verification : 3 integers all in [0..255]

int check_args(int argc, char const *argv[]) {

  char *next = NULL;

  double red = 0.;
  double green = 0.;
  double blue = 0.;

  const int minValue = 0;
  const int maxValue = 255;

  if (argc != 4)
  {
    puts("error, the number of parameters is incorrect.");
    usage();
    return 255;
  }

  strtol(argv[1], &next, 10);
  if ((next == argv[1]) || (*next != '\0')) {
    if (*next == '.') {
      puts("error, the parameter 1 is not an integer.");
    } else {
      puts("error, the type of parameter 1 is incorrect.");
    }
    usage();
    return 1;
  }
  red = atof(argv[1]);
  if (red<minValue || red>maxValue) {
    puts("error, the parameter 1 is out of range.");
    usage();
    return 1;
  }

  strtol(argv[2], &next, 10);
  if ((next == argv[2]) || (*next != '\0')) {
    if (*next == '.') {
      puts("error, the parameter 2 is not an integer.");
    } else {
      puts("error, the type of parameter 2 is incorrect.");
    }
    usage();
    return 2;
  }
  green = atof(argv[2]);
  if (green<minValue || green>maxValue) {
    puts("error, the parameter 2 is out of range.");
    usage();
    return 2;
  }

  strtol(argv[3], &next, 10);
  if ((next == argv[3]) || (*next != '\0')) {
    if (*next == '.') {
      puts("error, the parameter 3 is not an integer.");
    } else {
      puts("error, the type of parameter 3 is incorrect.");
    }
    usage();
    return 4;
  }
  blue = atof(argv[3]);
  if (blue<minValue || blue>maxValue) {
    puts("error, the parameter 3 is out of range.");
    usage();
    return 4;
  }

  return 0;
}



int main(int argc, char const *argv[])
{

  double red = 0.;
  double green = 0.;
  double blue = 0.;

  double x = 0.;
  double y = 0.;
  double z = 0.;

  double l = 0.;
  double a = 0.;
  double b = 0.;


  // check parameters
  int check = check_args(argc, argv); 
  if (check) {
    return check;
  }

  red = atof(argv[1]);
  green = atof(argv[2]);
  blue = atof(argv[3]);


  // display input parameters

  printf("\nR = %3.0lf\n", red);
  printf("G = %3.0lf\n", green);
  printf("B = %3.0lf\n", blue);


  // RGB to XYZ

  // ... insert your code here...
  
  puts("\nRGB -> XYZ\n");
  printf("X=%+8.3lf\n", x);
  printf("Y=%+8.3lf\n", y);
  printf("Z=%+8.3lf\n", z);




  // XYZ to Lab

  // ... insert your code here...

  puts("\nXYZ -> Lab\n");
  printf("L=%+8.3lf\n", l);
  printf("a=%+8.3lf\n", a);
  printf("b=%+8.3lf\n", b);



  return 0;
}
