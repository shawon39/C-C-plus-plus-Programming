#include <stdio.h>

int main()
{
     int marks[10],i,n;
     scanf("%d", &n);

     for(i=0; i<n; i++)
     {
          scanf("%d", &marks[i]);
     }

     for(i=0; i<n; i++)
     {
          printf("%d ", marks[i]);
     }

     return 0;
}
