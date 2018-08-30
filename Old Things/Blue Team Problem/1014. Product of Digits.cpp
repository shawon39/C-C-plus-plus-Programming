#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v;

    if(n==0) {cout << 10 <<endl; return 0;}
    if(n==1) {cout << 1 <<endl; return 0;}

    for(int i=9; i>=2; i--)
    {
        while( n % i == 0 )
        {
            n/=i; v.push_back(i);
        }
    }

    if(n==1)
    {
        for(int i=v.size()-1; i>=0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    else
    {
        cout << -1 <<endl;
    }

    return 0;
}


