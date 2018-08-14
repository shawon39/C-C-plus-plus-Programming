#include <stdio.h>

int main()
{
     int marks[10],i,n, sum=0;
     scanf("%d", &n);

     for(i=0; i<n; i++)
     {
          scanf("%d", &marks[i]);
     }

     for(i=0; i<n; i++)
     {
          sum = sum + marks[i];
     }

     printf("%d\n", sum);

     return 0;
}

