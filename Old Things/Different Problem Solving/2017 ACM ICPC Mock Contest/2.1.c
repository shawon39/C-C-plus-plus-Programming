#include<stdio.h>


int fib(int n)
{
    if (n <= 1)
        return n;
        return fib(n-1) + fib(n-2);
}

int main()
{
    int t;
    int a[1000]; //array will have the capacity to store 1000 digits.
    int n,base,i,j,temp,m,x,M,temp2,count,ww;

    scanf("%d",&t);
    while(t--)
    {
        count = -1;
        scanf("%d %d %d",&n,&i,&M); // n is the power.
        n = n+2;
        ww = fib(n);
        a[0]=1;  //initializes array with only 1 digit, the digit 1.
        m=1;    // initializes digit counter
        int k=1;//k is a counter that goes from 1 to  n.
        temp = 0; //Initializes carry variable to 0.
        while(k<=ww)
        {

            while(M > 0)
            {
                temp2 = M / 10;
                M = temp2;
                count ++;
            }

            for(j=0; j<m; j++)
            {
                x = a[j]*i+temp; //x contains the digit by digit product
                a[j]=x%10; //Contains the digit to store in position j
                temp = x/10; //Contains the carry value that will be stored on later indexes
            }
            while(temp>0) //while loop that will store the carry value on array.
            {
                a[m]=temp%10;
                temp = temp/10;
                m++; // increments digit counter
            }
            k++;
        }

            int ten;
            ten = m - count;


         for(i=count-1; i>=0; i--)
            {
                printf("%d",a[i]);
            }
            printf("\n");

    }
    return 0;
}

