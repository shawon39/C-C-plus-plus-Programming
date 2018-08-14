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

            cout << i << " " << num/i <<endl;
        }
        if (num % i == 0 && i*i == num)
        {
            v.push_back(i);
            v.push_back(i);

            cout << i << " " << i <<endl;
        }
    }

    for(ll i=0; i<v.size(); i++)
    {
       cout << v[i] << " ";
    }
}


int main()
{
    fast; int test; cin >> test;

    while(test--)
    {
        int num; cin >> num;

        solve(num);
    }
    return 0;
}

