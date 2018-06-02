#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100000000

int main()
{
    int n,i,j,t,count,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        count=0;
        for(i=2; i<=MAX; i++)
        {
            temp=0;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    temp=1;
                    break;
                }
            }
            if(temp==0)
            {
                count++;
            }
            if(count==n)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

/*

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
#define MAX 165000

long long prime[MAX];
long long status[MAX];

void getPrime()
{
    int i, j;
    long long n = MAX;
    int p=1;
    long long sq = sqrt(n);
    for(i=4 ; i<=n; i=i+2)
    {
        status[i] = 1;
    }
    for(i=3 ; i<=sq; i=i+2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=n; j+=i)
            {
                status[j]=1;
            }
        }
    }

    for(i=2 ; i<=n ; i++)
    {
        if(status[i] == 0)
        {
            prime[p] = i;
            p++;
        }
    }
}

int main()
{
    int test, index;
    getPrime();
    scanf("%d", &test);
    while(test--)
    {
        cin >> index;
        cout << prime[index] << endl;
    }
}

*/
