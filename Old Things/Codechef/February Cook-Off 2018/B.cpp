#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int

int main()
{
    fast; ll N,a,b,c,test,ct;
    cin >> test;

    while( test-- )
    {
        ct = 0;
        cin >> N >> a >> b >> c;

        for(ll i=1; i<=a; i++)
        {
            for(ll j=1; j<=b; j++)
            {
                if(i*j > N) break;
                for(ll k=1; k<=c; k++)
                {
                    if(i*j*k > N) break;

                    if( i * j * k == N ) ct++;
                }
            }
        }
        cout << ct <<endl;
    }
    return 0;
}
