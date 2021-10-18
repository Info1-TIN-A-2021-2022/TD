/*
    Structure of a C file
    2021, october 6th
    by πR

    RPN simulator for basics operation

    Compilation :            make app
    Execution   :            ./app
    Get the returned value : echo $?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(void) {

  puts(
      "usage: display the results of X and Y with the operation OP (+,-,x,/).");
  puts("       app X Y OP");
  return;
}


int check_args(int argc, char const *argv[]) {

  char *next = NULL;

  if (argc != 4) {
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

  if (strlen(argv[3]) != 1 || !(argv[3][0] == '+' || argv[3][0] == '-' ||
                                argv[3][0] == 'x' || argv[3][0] == '/')) {
    puts("error, the operator is incorrect.");
    usage();
    return 3;
  }
  return 0;
}

int main(int argc, char const *argv[]) {

  int check = check_args(argc, argv); 
  if (check) {
    return check;
  }

  puts("TD20211006");
  switch (argv[3][0]) {
  case '+':
    printf("result=%+d\n", atoi(argv[1]) + atoi(argv[2]));
    break;
  case '-':
    printf("result=%+d\n", atoi(argv[1]) - atoi(argv[2]));
    break;
  case 'x':
    printf("result=%+d\n", atoi(argv[1]) * atoi(argv[2]));
    break;
  case '/':
    printf("result=%+d\n", atoi(argv[1]) / atoi(argv[2]));
    break;
  }
  return 0;
}
