#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,A,B;
    cin >> n>>k>>A>>B;

    long long int x,m,lol=0;

    m=n;
    m--;
    lol += A;

    while(m)
    {
        if(m<2)
        {
            break;
        }
        if( m%k == 0 )
        {
            m/=k;
            lol+=B;
        }
        else
        {
            m--;
            lol += A;
        }
    }

    cout << lol <<endl;

    return 0;
}

