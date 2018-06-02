#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define murikha return 0

int main()
{
    int arr[100001],arr2[100001];
    int i,n; sf1(n);
    long long sum = 0, sum2 = 0;

    for(i=0; i<n; i++){
                sf1(arr[i]);
                sum += arr[i];
    }
     for(i=0; i<n; i++){
                sf1(arr2[i]);
    }
    sort(arr2,arr2+n);
    sum2 = arr2[n-1] + arr2[n-2];

    (sum2 >= sum)? cout << "YES" : cout << "NO"; nl;

   return 0;
}

