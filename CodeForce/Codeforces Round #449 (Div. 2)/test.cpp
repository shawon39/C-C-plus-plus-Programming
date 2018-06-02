#include<bits/stdc++.h>
#define debug(x) cout << #x << " = " << (x) << endl
using namespace std;

long long gen(long long n)
{
    long long x = n;
    while(n)
    {
        x = x*10+n%10;
        n/=10;
    }
    debug(x);
    return x;
}

int main()
{
    long long k, p, temp=0, sum = 0;
    cin>>k>>p;

    for(int i=1; i<=k; i++)
    {
        sum+=gen(i)%p;
    }
    cout<<sum%p<<endl;
    return 0;
}
