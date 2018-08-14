#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

void solve(ll num)
{
    ll square_root = (ll) sqrt(num) + 1;
    vector<ll>v;

    for (ll i = 1; i < square_root; i++)
    {
        if (num % i == 0 && i*i != num)
        {
            v.push_back(i);
            v.push_back(num/i);
        }
        if (num % i == 0 && i*i == num)
        {
            v.push_back(i);
            v.push_back(i);
        }
    }

    for(ll i=0; i<v.size()-2; i++)
    {
        for(ll j=i+1; j<v.size()-1; j++)
        {
            for(ll k=j+1; k<v.size(); k++)
            {
                if( v[i] + v[j] + v[k] == num ) {
                    printf("%lld %lld %lld\n", v[i], v[j], v[k]);
                    return;
                }
            }
        }
    }
    printf("IMPOSSIBLE\n");
}


int main()
{
    fast; int test; scanf("%d", &test);

    while(test--)
    {
        ll num;
        scanf("%lld", &num);

        if( num % 3 == 0 )
        {
            printf("%lld %lld %lld\n", (num/3),(num/3),(num/3) );
        }
        else if( num % 4 == 0 )
        {
             printf("%lld %lld %lld\n", (num/2),(num/4),(num/4) );
        }
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}

