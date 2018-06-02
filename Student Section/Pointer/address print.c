/* Example to demonstrate use of reference operator in C programming. */
#include <stdio.h>
int main()
{
  int num = 5;
  int *p;

  p = &num;

  *p = 56;

  //num = 100;

  printf("Value of *p: %d \n", *p);
  printf("Value of *p: %u \n\n", p);

  printf("Number: %d \n", num);
  printf("Address: %u \n", &num);

  return 0;
}
