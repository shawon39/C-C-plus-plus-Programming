#include <stdio.h>
int main()
{
   char Parray[4];
   int i;

   for(i = 0; i < 4; i++)
   {
      Parray[i] = i + 100;
   }

   for(i = 0; i < 4; i++)
   {
      printf("Address of Parray [%d] = %u\n", i, &Parray[i]);
   }

   return 0;
}
