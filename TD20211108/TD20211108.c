/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211108/TD20211108.c
    Created on: 2021-11-08 13:29:37
    by:         πR

    Description test scanf
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  // enter of an integer from the keyboard
#if 0
  // integer i
  // integer ret (scanf return value)

  int i = 0;
  int j = 0;
  int ret = 0;

  printf("Enter an integer value: ");
  ret = scanf("%d", &i);

  printf("ret = %d\n", ret);
  printf("i   = %d\n", i);

  printf("Enter an integer value: ");
  ret = scanf("%d", &j);

  printf("ret = %d\n", ret);
  printf("j   = %d\n", j);
#endif

  // enter of a string from the keyboard (no space allowed in the string)
#if 0
  char s1[] = "Hello";
  int ret = 0;
  printf("s1=[%s]\n", s1);
  printf("Enter a string (max 5 char): ");
  ret = scanf("%s", s1);
  printf("s1=[%s]\n", s1);

#endif
  // enter of a string from the keyboard (no space allowed in the string)
#if 0
  char s2[256];
  int ret = 0;
  printf("Enter a string (max 255 char): ");
  ret = scanf("%s", s2);
  printf("s2=[%s]\n", s2);
  printf("ret=%d\n", ret);
#endif
  // enter of a string from the keyboard (space allowed in the string)
#if 0
  char s2[256];
  gets(s2);
  printf("s2=[%s]\n", s2);
  return 0;
#endif
#if 0
  int ret = 0;
  int h = 0;
  int m = 0;
  int s = 0;
  printf("Enter the current time (hh:mm:ss) ");
  ret=scanf("%2d:%d:%d", &h, &m, &s);
  printf("%02d:%02d:%02d\n", h, m, s);
  printf("ret=%d\n", ret);
  return 0;
#endif

// enter of a char from the keyboard
#if 0
  char c = 0;
  c = getchar();
  printf("c=[%c]\n", c);
  printf("c=[%d]\n", c);
#endif
#if 1
  char c = 0;
  char d = 0;
  c = getchar();
  printf("c=[%c]\n", c);
  d = getchar();
  printf("d=[%c]\n", d);
#endif
}