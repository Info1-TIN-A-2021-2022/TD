/*
    File:       /workspaces/Info1-TIN-A/TD/TD20211018/TD20211021.c
    Created on: 2021-10-21 14:00:22
    by:         πR

    Description scan values with scanf and formats
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

  int a=0x11223344;
  int b=0x55667788;
  int c=0x99aabbcc;
  int ret=0;

  printf("adresse(a)=%p  a=%08X\n",  &a,   a);
  printf("adresse(b)=%p  b=%08X\n",  &b,   b);
  printf("adresse(c)=%p  c=%08X\n",  &c,   c);

/*
  printf("Enter the value of b:"); // saisir la valeur 1000

  ret=scanf("%d", &b);
  printf("ret=%d\n",ret);

  printf("adresse(a)=%p  a=%08X\n",  &a,   a);
  printf("adresse(b)=%p  b=%08X\n",  &b,   b);
  printf("adresse(c)=%p  c=%08X\n",  &c,   c);
*/

  printf("Enter the values of a and b:");
  ret=scanf("%d%d", &a, &b);
  printf("ret=%d\n",ret);

  printf("adresse(a)=%p  a=%08X\n",  &a,   a);
  printf("adresse(b)=%p  b=%08X\n",  &b,   b);
  printf("adresse(c)=%p  c=%08X\n",  &c,   c);

  return 0;
}

































#if 0

#include <stdio.h>
#include <math.h>

void int_memory_display(unsigned char *p) {
  printf("%p - %02X\n",p,*p);
  printf("%p - %02X\n",p+1,*(p+1));
  printf("%p - %02X\n",p+2,*(p+2));
  printf("%p - %02X\n",p+3,*(p+3));
  return;
}
int main(int argc, char const *argv[])
{
  int a=0x11223344;
  int b=0x55667788;
  int c=0x99AABBCC;

  printf("a=%d\n",a);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&a));

  printf("b=%d\n",b);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&b));

  printf("c=%d\n",c);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&c));

  printf("Enter the value of b:");
  scanf("%ld", &b);


  printf("a=%d\n",a);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&a));

  printf("b=%d\n",b);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&b));

  printf("c=%d\n",c);
  printf("sizeof(int)=%lu\n",sizeof(int));
  int_memory_display((unsigned char*)(&c));

  return 0;
} 

#endif