#include <stdio.h>
int main()
{
     int marks[10], i, n, sum = 0, average;
     printf("Enter n: ");
     scanf("%d", &n);

     for(i=0; i<n; i++)
     {
          printf("Enter number %d: ",i+1);
          scanf("%d", &marks[i]);
          sum = sum + marks[i];
          printf("Sum: %d\n", sum);
     }

     average = sum/n;

     printf("Average = %d", average);

     return 0;
}
